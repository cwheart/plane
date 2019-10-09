#include <stdio.h>   
#include <sys/types.h>   
#include <sys/socket.h>   
#include <netinet/in.h>   
#include <unistd.h>   
#include <errno.h>   
#include <string.h>   
#include <math.h>   
  
#define SERV_PORT   15000
#define BIT_GET(data, offset) (((data) >> (offset)) & 0x01)
#define FL 38.04

int ParseByteCAT021026(unsigned char *pCatBuff) {
  unsigned short usT;
  unsigned int uT1 = 0, uT2 = 0;
  float fT1,fT2;
  int iDLen,i=3,fs,iArray[32],j,n;
  char JsonArrStr[128],strTmp[256];
  unsigned char fspec[10],cT1,cT2,cT3,cT4,ucCall[8];
  if(pCatBuff[0]!=0x15) return -1; // asterix 048 or 034
  iDLen =(pCatBuff[1]<<8)+pCatBuff[2];
  // if(iPos>0) i=iPos;
  if(iDLen>1024) return -1;
  while(i<iDLen) {
    for(fs=0; fs<10; fs++) {
      fspec[fs]= pCatBuff[i++];
      if((fspec[fs]&0x01)!=0)
        continue;
      break;
    }

    if((fspec[0]&0x10)!=0){
      printf("the start i is: %d\n", i);
      printf("the uT1 is: %d; the data is: %02x %02x %02x %02x\n", uT1, pCatBuff[i], pCatBuff[i + 1], pCatBuff[i + 2], pCatBuff[i + 3]);
      uT1+=pCatBuff[i++]*256*256*256;
      uT1+=pCatBuff[i++]*256*256;
      uT1+=pCatBuff[i++]*256;
      uT1+=pCatBuff[i++];
      
      uT2+=pCatBuff[i++]*256*256*256;
      uT2+=pCatBuff[i++]*256*256;
      uT2+=pCatBuff[i++]*256;
      uT2+=pCatBuff[i++];

      fT1=(float)(uT1)*180.0/pow(2,25);
      fT2=(float)(uT2)*180.0/pow(2,25);

      printf("The lat is: %f\n", fT1);
      printf("The long is : %f\n", fT2);

    }
    if((fspec[0]&0x04)!=0) {
      fT1 = pCatBuff[i++] * 256;
      fT1 = fT1 + pCatBuff[i++];
      fT1 = fT1 * 6.25 * 0.3048;
      printf("The alt is : %f\n", fT1);
    }
    if((fspec[0]&0x01) == 0) break;
    if((fspec[1]&0x20) != 0) {
      fT1 = pCatBuff[i++] * 256;
      fT1 = fT1 + pCatBuff[i++];
      fT1 = fT1 * 0.25 * FL;
      printf("The pressure is : %f\n", fT1);
    }

    if((fspec[1]&0x10) != 0) {
      usT = pCatBuff[i++] * 256;
      usT = usT + pCatBuff[i++];
      if(BIT_GET(usT, 15)) {
        fT1 = (0x7FFF&usT) * 0.001;
      } else {
        fT1 = usT * pow(2, -14) * 1852.0;
      }
      printf("The speed is: %f\n", fT1);
    }

    if((fspec[1]&0x01) == 0) break;

    if((fspec[2]&0x10)!=0) {
      memset(ucCall, 0, 8);
      ucCall[0] = pCatBuff[i++];
      ucCall[1] = pCatBuff[i++];
      ucCall[2] = pCatBuff[i++];
      ucCall[3] = pCatBuff[i++];
      ucCall[4] = pCatBuff[i++];
      ucCall[5] = pCatBuff[i++];
      printf("The plane no is: %s\n", ucCall);
    }

    break;
  }
  return 0;
}
  
int main()  
{  
  int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
  if(sock_fd < 0)  
  {  
    perror("socket");  
    return 1;
  }  
  
  struct sockaddr_in addr_serv;  
  int len;  
  memset(&addr_serv, 0, sizeof(struct sockaddr_in));
  addr_serv.sin_family = AF_INET;
  addr_serv.sin_port = htons(SERV_PORT);
  addr_serv.sin_addr.s_addr = htonl(INADDR_ANY);
  len = sizeof(addr_serv);  
    
  if(bind(sock_fd, (struct sockaddr *)&addr_serv, sizeof(addr_serv)) < 0)  
  {  
    perror("bind error:");  
    return 1;
  }  
  
    
  int recv_num;  
  int send_num;  
  char send_buf[20] = "i am server!";  
  unsigned char recv_buf[1024];  
  struct sockaddr_in addr_client;  
  
  while(1)  
  {  
    printf("server wait:\n");  
      
    recv_num = recvfrom(sock_fd, recv_buf, sizeof(recv_buf), 0, (struct sockaddr *)&addr_client, (socklen_t *)&len);  
      
    if(recv_num < 0)  
    {  
      perror("recvfrom error:");  
      return 1;      
    }  
  
    recv_buf[recv_num] = '\0';
    printf("server receive %d bytes: %s\n", recv_num, recv_buf);  
    ParseByteCAT021026(recv_buf);

    for (int i = 0; i < 29; ++i)
    {
      printf("%02x\n", recv_buf[i]);
    }
    printf("\n");
  
    send_num = sendto(sock_fd, send_buf, recv_num, 0, (struct sockaddr *)&addr_client, len);  
      
    if(send_num < 0)  
    {  
      perror("sendto error:");  
      return 1;      
    }  
  }  
    
  close(sock_fd);  
    
  return 0;  
}
#include <stdio.h>   
#include <sys/types.h>   
#include <sys/socket.h>   
#include <netinet/in.h>   
#include <unistd.h>   
#include <errno.h>   
#include <string.h>   
#include <stdlib.h>   
  
#define SERV_PORT   8000   
  
int main()  
{  
  int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
  if(sock_fd < 0)  
  {  
    perror("socket");  
    exit(1);  
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
    exit(1);  
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
      exit(1);  
    }  
  
    recv_buf[recv_num] = '\0';  
    printf("server receive %d bytes: %s\n", recv_num, recv_buf);  

    for (int i = 0; i < 27; ++i)
    {
      printf("%02x\n", recv_buf[i]);
    }
    printf("\n");
  
    send_num = sendto(sock_fd, send_buf, recv_num, 0, (struct sockaddr *)&addr_client, len);  
      
    if(send_num < 0)  
    {  
      perror("sendto error:");  
      exit(1);  
    }  
  }  
    
  close(sock_fd);  
    
  return 0;  
}
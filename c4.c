#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#define BIT_SET(x, y) x|=(1<<(y)) //将X的第Y位置1
#define BUFF_SIZE 1024

unsigned short int set_acFs(unsigned char uacBuff[]) {
  char acFs[6];
  int j;
  unsigned short int iFsLen = 0;
  BIT_SET(acFs[0], 4); // 经维度 130
  BIT_SET(acFs[0], 2); // 海拔 140
  BIT_SET(acFs[1], 5); // 气压高度 145
  BIT_SET(acFs[1], 4); // 速度 150
  BIT_SET(acFs[2], 4); // 机号 170
  BIT_SET(acFs[0], 0);
  BIT_SET(acFs[1], 0);
  BIT_SET(acFs[2], 0);
  BIT_SET(acFs[3], 0);
  for(j=0;j<6;j++) {
      if(acFs[j]>0) {
          uacBuff[3 + j] = acFs[j];
          iFsLen = iFsLen + 1;
      }
  }
  return iFsLen;
}

void set_header(unsigned char uacBuff[], unsigned short int begin) {
  uacBuff[0] = 0x15; // 头 0x15
  begin = htons(begin);
  memcpy(uacBuff + 1, &begin, sizeof(unsigned short int)); // 长度 包括头本身数据长度
}

void post_data(int len, unsigned char uacBuff[]) {
  int fd;
  fd = socket(AF_INET, SOCK_DGRAM, 0);
  struct sockaddr_in sockaddr_in1;
  sockaddr_in1.sin_family = AF_INET;
  sockaddr_in1.sin_port = htons(8000);
  sockaddr_in1.sin_addr.s_addr = inet_addr("192.168.1.106");
  sendto(fd, uacBuff, len, 0, (struct sockaddr*)&sockaddr_in1, sizeof(sockaddr_in1));
  close(fd);
}

int main() {
  unsigned char uacBuff[1024];
  unsigned short int begin = 3;
  begin = begin + set_acFs(uacBuff);
  set_header(uacBuff, begin);
  post_data(sizeof(uacBuff), uacBuff);
}

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <math.h>

#define BIT_SET(x, y) x|=(1<<(y)) //将X的第Y位置1
#define BUFF_SIZE 1024
#define PORT 8000   
#define HOST  "127.0.0.1"   

int main() {
  unsigned char cs[1024];
  cs[0] = 0x15;
  cs[1] = 0x0;
  cs[2] = 0xf;
  cs[3] = 0x15;
  cs[4] = 0x31;
  cs[5] = 0x11;
  cs[6] = 0x1;
  cs[7] = 0x37;
  cs[8] = 0x88;
  cs[9] = 0x4a;
  cs[10] = 0x1;
  cs[11] = 0x37;
  cs[12] = 0x88;
  cs[13] = 0x4a;
  cs[14] = 0x1;
  cs[15] = 0x0;
  cs[16] = 0x5c;
  cs[17] = 0x37;
  cs[18] = 0x11;
  cs[19] = 0x32;
  cs[20] = 0x78;
  cs[21] = 0x0;
  cs[22] = 0x0;
  cs[23] = 0x0;
  cs[24] = 0xc;
  cs[25] = 0x0;
  cs[26] = 0x0;


  int fd;
  fd = socket(AF_INET, SOCK_DGRAM, 0);
  struct sockaddr_in sockaddr_in1;
  sockaddr_in1.sin_family = AF_INET;
  sockaddr_in1.sin_port = htons(8000);
  sockaddr_in1.sin_addr.s_addr = inet_addr(HOST);
  sendto(fd, &cs, 1024, 0, (struct sockaddr*)&sockaddr_in1, sizeof(sockaddr_in1));
  close(fd);
}

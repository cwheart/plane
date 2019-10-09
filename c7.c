#include <stdio.h>   
#include <string.h>   
#include <errno.h>   
#include <stdlib.h>   
#include <unistd.h>   
#include <sys/types.h>   
#include <sys/socket.h>   
#include <netinet/in.h>   
#include <arpa/inet.h>   
   
  
#define DEST_PORT 8000   
#define DSET_IP_ADDRESS  "127.0.0.1"   

#define BIT_SET(x, y) x|=(1<<(y)) //将X的第Y位置1
#define BUFF_SIZE 1024
int main() {
  int data = 16732886;
  int tmp = 0;


  // data = htons(data);
  unsigned char buf[1024];
  buf[0] = data / 256 / 256 / 256;
  data = data % (256 * 256 * 256);
  buf[1] = data / 256 / 256;
  data = data % (256 * 256);
  buf[2] = data / 256;
  data = data % 256;
  buf[3] = data;

  printf("%02x\n", buf[0]);
  printf("%02x\n", buf[1]);
  printf("%02x\n", buf[2]);
  printf("%02x\n", buf[3]);

  int result = 0;
  result += 256 * 256 * 256 * buf[0];
  result += 256 * 256 * buf[1];
  result += 256 * buf[2];
  result += buf[3];
  printf("%d\n", result);

  return 0;
}

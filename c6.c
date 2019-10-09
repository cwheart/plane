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
  unsigned char cs[1024];
  cs[0] = 17;

  printf("%d\n", (cs[0]&0x10));    
  return 0;
}

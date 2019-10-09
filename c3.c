#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#define BIT_SET(x, y) x|=(1<<(y)) //将X的第Y位置1
#define BUFF_SIZE 1024

int main() {
  char acFs[6];
  int j;
  int iFsLen = 0;
  BIT_SET(acFs[0], 4); // 经维度 130
  BIT_SET(acFs[0], 2); // 海拔 140
  BIT_SET(acFs[1], 5); // 气压高度 145
  BIT_SET(acFs[1], 4); // 速度 150
  BIT_SET(acFs[2], 4); // 机号 170
  BIT_SET(acFs[1], 0);
  BIT_SET(acFs[2], 0);
  BIT_SET(acFs[3], 0);

  for(j=0;j<6;j++) {
    if(acFs[j]>0) {
      // uacBuff[3 + j] = acFs[j];
      printf("%d\n", acFs[j]);
      iFsLen = iFsLen + 1;
    }
  }
  printf("%d\n", iFsLen);
  return 0;
}

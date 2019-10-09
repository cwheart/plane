#include <stdio.h>
#include <sys/socket.h>

int main() {
  unsigned char uacBuff[1024];
  char acFs[6];

  uacBuff[0] = 0x15;
  uacBuff[1] = 60;
  uacBuff[2] = 21;
  for(int i = 0; i < 50; i++) {
    uacBuff[i+ 3] = 21 +i;
  }

  printf("aa%s123\n", uacBuff);


  int a = 8;
  int b = 5;
  printf("a | b: %d\n", a | b);
  printf("a | b >> 2: %d\n", a | b >> 2);
  printf("8 | 1: %d\n", 8 | 1);
  printf("13 >> 2: %d\n", 13 >> 2);
  printf("a: %d\n", a << 2);

  printf("htons: %d \n",htons(16));


  // bit_set(acFs[2],4);   第18项
  // bit_set(acFs[1],0);   第1项
  // bit_set(acFs[2],0);   第8项
  // bit_set(acFs[3],0);   第15项


}
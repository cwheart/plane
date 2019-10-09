#include <stdio.h>
#define SET_BIT(x, y) x|=(1<<y) //将X的第Y位置1
#define CLR_BIT(x, y) x&=~(1<<y) //将X的第Y位清0


int main() {
  char a = 65;
  printf("%c\n", a);
  SET_BIT(a, 1);
  printf("%c\n", a);
}
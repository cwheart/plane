#include <stdio.h>

int main() {
  const char *str = "hello";
  char ch[1024];
  for(int i = 0 ; i < 5; i++) {
    ch[i] = *(str + i);
  }
  printf("%s\n", ch);
  printf("%lu\n", sizeof(double));
}

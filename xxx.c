#include <stdio.h>

int main() {
  char buf[1024];
  buf[0] = 0x15;
  printf("%d\n", buf[0]);
}

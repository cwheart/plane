#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

void send_msg(int size, unsigned char buf[]) {
  int fd=socket(AF_INET, SOCK_DGRAM, 0);
  struct sockaddr_in sockaddr_in1;
  sockaddr_in1.sin_family =AF_INET;
  sockaddr_in1.sin_port =htons(8000);
  sockaddr_in1.sin_addr.s_addr = inet_addr("192.168.1.106");
  printf("%d\n", buf[0]);

  sendto(fd, buf, size, 0, (struct sockaddr*)&sockaddr_in1, sizeof(sockaddr_in1));
}

int main() {
  printf("%lu\n", sizeof(unsigned short int));
  unsigned char buf[1024];
  buf[0] = 0x15;
  send_msg(sizeof(buf), buf);
  return 0;
}

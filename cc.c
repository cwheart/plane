#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

void send_msg(unsigned char buf1[]) {
  int fd=socket(AF_INET, SOCK_DGRAM, 0);
  struct sockaddr_in sockaddr_in1;
  sockaddr_in1.sin_family =AF_INET;
  sockaddr_in1.sin_port =htons(8000);
  sockaddr_in1.sin_addr.s_addr = inet_addr("127.0.0.1");
  unsigned char buf2[1024];
  buf2[0] = 0x15;

  sendto(fd, &buf2, sizeof(buf2),0,(struct sockaddr*)&sockaddr_in1, sizeof(sockaddr_in1));
}

int main() {
  unsigned char buf[1024];
  buf[0] = 0x15;
  send_msg(buf);
  return 0;
}

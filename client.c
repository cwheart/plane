#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main() {
  // printf("xxxxx\n");
  // int sockfd=socket(AF_INET, SOCK_DGRAM, 0);
  // struct sockaddr_in addr;
  // addr.sin_family =AF_INET;
  // addr.sin_port =htons(8000);
  // addr.sin_addr.s_addr = inet_addr("127.0.0.1");
  // int i = 0;
  // char buf[1024] = "hello i am hello.....";
  // while(1) {
  //   sendto(sockfd, &buf, sizeof(buf),0,(struct sockaddr*)&addr, sizeof(addr));
  //   sleep(1);
  // }

  int fd=socket(AF_INET, SOCK_DGRAM, 0);
  struct sockaddr_in sockaddr_in1;
  sockaddr_in1.sin_family =AF_INET;
  sockaddr_in1.sin_port =htons(8000);
  sockaddr_in1.sin_addr.s_addr = inet_addr("127.0.0.1");
  char buf[1024] = "hello i am hello.....";

  sendto(fd, &buf, sizeof(buf),0,(struct sockaddr*)&sockaddr_in1, sizeof(sockaddr_in1));

  return 0;


}
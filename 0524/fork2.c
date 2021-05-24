
#include <stdio.h>
#include <unistd.h>
/* 부모프로세스가자식프로세스를생성하고서로다른메시지를프린트한다. */
int main() 
{
int pid;

pid= fork();
if(pid==0){   // 자식프로세스
printf("[Child] : Hello, world pid=%d\n",getpid());
printf("Child 1\n");
printf("Child 2\n");
}
else {          // 부모프로세스
printf("[Parent] : Hello, world pid=%d\n",getpid());
printf("Parent 1\n");
printf("Parent 2\n");
}
}


#include <stdio.h>
#include <unistd.h>
/* 자식프로세스를생성한다. */
int main()
{ 
int pid;
printf("[%d] 프로세스시작\n", getpid());
pid= fork();
printf("[%d] 프로세스: 리턴값%d\n", getpid(), pid);
}

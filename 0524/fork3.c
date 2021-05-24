
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
/* 부모프로세스가두개의자식프로세스를생성한다. */
int main() 
{
int pid1, pid2;
pid1 = fork();
if(pid1 == 0) {
printf("[Child1] : Hello, world! pid=%d\n",getpid());
exit(0);
}

pid2 = fork();
if(pid2 == 0) {
printf("[Child2] : Hello, world! pid=%d\n",getpid());
exit(0);
}
}

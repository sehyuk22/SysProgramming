

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/* 프로세스번호를출력한다. */
int main()
{ 
int pid;
printf("나의프로세스번호: %d \n", getpid());
printf("내부모프로세스번호: %d \n", getppid());
}

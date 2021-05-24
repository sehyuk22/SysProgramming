
#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
/* 부모프로세스가자식프로세스를생성하고끝나기를기다린다. */
int main() 
{
int pid1, pid2, child, status;

printf("[%d] 부모프로세스시작\n", getpid( ));
pid1 = fork();
if(pid1 == 0) {
printf("[%d] 자식프로세스#1 시작\n", getpid( ));
sleep(1);
printf("[%d] 자식프로세스#1 종료\n", getpid( ));
exit(1);
}
pid2 = fork();
if(pid2 == 0) {
printf("[%d] 자식프로세스#2 시작\n", getpid( ));
sleep(2);
printf("[%d] 자식프로세스#2 종료\n", getpid( ));
exit(2);
}

child= waitpid(pid1, &status, 0); // 자식프로세스#1의종료를기다린다.
printf("[%d] 자식프로세스#1 %d종료\n", getpid(), child);
printf("\t종료코드%d\n", status>>8);
}

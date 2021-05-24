
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/* 자식프로세스의표준출력을파일에재지정한다. */
int main(int argc, char* argv[])
{
int child, pid, fd, status;
pid= fork( );
if (pid== 0) {
fd= open(argv[1], O_CREAT|O_TRUNC|O_WRONLY, 0600);
dup2(fd, 1);  /* 파일을표준출력에복제*/
close(fd);
execvp(argv[2], &argv[2]);
fprintf(stderr, "%s:실행불가\n",argv[1]);
} else {
child = wait(&status);
printf("[%d] 자식프로세스%d 종료\n", getpid(), child);
}
}

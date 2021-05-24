
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/* 표준출력을파일에재지정하는프로그램*/
int main(int argc, char* argv[])
{
int fd, status;
fd= open(argv[1], O_CREAT|O_TRUNC|O_WRONLY, 0600);
dup2(fd, 1);  /* 파일을표준출력에복제*/
close(fd);
printf("Hello stdout!\n");
fprintf(stderr,"Hello stderr!\n");
}

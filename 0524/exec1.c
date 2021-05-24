
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/* 자식프로세스를생성하여echo 명령어를실행한다. */
int main( ) 
{
printf("부모프로세스시작\n");
if (fork( ) == 0) {
execl("/bin/echo", "echo", "hello", NULL);
fprintf(stderr,"첫번째실패");    
exit(1);
}
printf("부모프로세스끝\n");
}

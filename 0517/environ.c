
#include <stdio.h>
#include <stdlib.h>
/* 모든환경변수를출력한다. */
int main(int argc, char *argv[])
{
char    **ptr;
extern char  **environ;
for (ptr= environ; *ptr!= 0; ptr++) /* 모든환경변수값출력*/
printf("%s \n", *ptr);
exit(0);
}


#include <stdio.h>
#include <stdlib.h>
/* 모든명령줄인수를출력한다. */
int main(int argc, char *argv[])
{
int i;
for (i= 0; i< argc; i++)     /* 모든명령줄인수출력*/
printf("argv[%d]: %s \n", i, argv[i]);
exit(0);
}

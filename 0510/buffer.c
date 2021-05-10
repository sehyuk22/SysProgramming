#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
FILE *fp;
if (!strcmp(argv[1], "stdin")) {
fp= stdin;
printf("한글자입력:");
if (getchar() == EOF) perror("getchar");
}
else if (!strcmp(argv[1], "stdout"))
fp= stdout;
else if (!strcmp(argv[1], "stderr"))
fp= stderr;
else if ((fp= fopen(argv[1], "r")) == NULL) {
perror("fopen");
exit(1);
} 
else if (getc(fp) == EOF) perror("getc");
printf("스트림= %s, ", argv[1]);
if (fp->_flags & _IO_UNBUFFERED)
printf("버퍼미사용");
else if (fp->_flags & _IO_LINE_BUF)
printf("줄버퍼사용");
else 
printf("완전버퍼사용");
printf(", 버퍼크기= %d\n", fp->_IO_buf_end-fp->_IO_buf_base);
exit(0);
}

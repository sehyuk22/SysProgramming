#include <stdio.h>
#include <pwd.h>
#include <grp.h>
#include <sys/types.h>
#include <unistd.h>

/* 사용자ID를출력한다. */
int main()
{ 
int pid;
printf("나의실제사용자ID : %d(%s) \n", getuid(), getpwuid(getuid())->pw_name);
printf("나의유효사용자ID : %d(%s) \n", geteuid(), getpwuid(geteuid())->pw_name);
printf("나의실제그룹ID : %d(%s) \n", getgid(), getgrgid(getgid())->gr_name);
printf("나의유효그룹ID : %d(%s) \n", getegid(), getgrgid(getegid())->gr_name);
}

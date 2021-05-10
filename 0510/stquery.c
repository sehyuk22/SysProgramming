
#include<stdio.h> 
#include"student.h"
#define START_ID 1201001
/* 파일에저장된특정학생의정보를검색해서츨력한다. */
int main(int argc, char*argv[]) 
{  
struct student record;
char c;
int id;
FILE *fp;
if(argc!= 2) {
fprintf(stderr, "사용법: %s파일이름\n", argv[0]);
return 1;
}
if((fp= fopen(argv[1], "rb")) == NULL ) {
fprintf(stderr, "파일열기오류\n");
return2;
}
do {    
printf("검색할학생의학번입력: ");
if (scanf("%d", &id) == 1) {
fseek(fp, (id -START_ID) * sizeof(record), SEEK_SET);
if ((fread(&record, sizeof(record), 1, fp) > 0) && (record.id != 0))
printf("학번: %8d 이름: %4s 점수: %4d\n", 
record.id, record.name, record.score);
else printf("레코드%d 없음\n", id);
}
else printf("입력오류");
printf("계속하겠습니까?(Y/N)");
scanf(" %c", &c); 
} while (c=='Y');
fclose(fp);
return 0;
} 

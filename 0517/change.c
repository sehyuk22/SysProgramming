#include <stdio.h>
#include <stdlib.h>

int main(){

	char word = 0;
	while(1){
	printf("문자 입력 " );
	scanf(" %c", &word);

	if(word=='0')break;
	if(word >= 65 && word <= 90){
	printf("%c 의 소문자는 %c 입니다\n.", word, word+32);}
	if(word >= 97 && word <=122){
	printf("%c 의 대문자는 %c 입니다.\n", word, word-32);
		}}
exit(0);
		
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i = 0;
	char str[4];
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	
	printf("%s\n", str);
	
	//while (현재 문자 (str[1])이 맨 끝이 아님){ print로 현재 문자 하나 출력; i를 1 증가  
	while (str[i]!= '\0') {
	printf("%c", str[i]);
		i++;
	}
	
	return 0;
}

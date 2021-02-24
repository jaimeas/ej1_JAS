#include<stdio.h>
#include<string.h>
int main(){
	char c;
	
	for(c='A';c<='Z'; c++) {
		printf("%c",c);
	}
	printf("\n");
	for(c='A'; c<='Z'; c++){
		printf("%c%c, ",c, c+32);
	}

	printf("\n Hello World")
	return 0;
}
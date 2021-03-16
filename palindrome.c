#include <stdio.h>
#include<string.h>

void Palindrome(char userInput[50]){
	int i;
	int j;
	int largo = strlen(userInput);
	int value;
	for(i=0; i<=largo;i++){
		for(j=largo; j>=0;j--){
			if(userInput[i]=userInput[j]){
				value=1;
			}else
				value=0;
		}
		
	}printf("%i", value);	
}
	
	
	int main(void) {
		char userInput[50];
		scanf("%s", &userInput);
		Palindrome(userInput);
		return 0;
	}

#include <stdio.h>
#include <string.h>
int main() {
	int x = 0,y = 0;//declaring variable
	char s[100],c;//creating array of size 100 by using char type

	printf("Enter a string: ");
	gets(s);//get input string from user

   	while(s[x] != '\0') { 
   	  c = s[x];
   	  if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' //if statement to find vowels
   	  	|| c == 'o' || c == 'O' || c == 'u' || c == 'U') {
   	  	y++;
   	  }

   	  x++;
   	}

   	printf("\n");
   	printf("NUMBER OF VOWELS: %d \n", y); //outputs the number of vowels

	return 0;
}
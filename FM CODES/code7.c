#include <stdio.h>
#include <string.h>

int main()
{
    char string1[20];
    int i, length;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s", string1);//user input
    
    length = strlen(string1);// calculates length of string
    
    for(i=0;i < length/2 ;i++)//loops till half of string
    {
        if(string1[i] != string1[length-i-1])//the loop breaks if condition is not true and gives flag=1
        {
            flag = 1;
            break;
           }
        }
    
    if (flag = 1) {
        printf("%s is not a palindrome", string1);
    }    
    else {
        printf("%s is a palindrome", string1);
    }
}
#include<stdio.h>
void main()
{
    int a,b,c;//declare variable
    printf("The number of rows=\n");
    scanf("%d",&a);//takes the input for number of rows from user
    for(b=1;b<=a;b++)//nested loop which is used to create the pattern depending on input of number of rows
    {
    for(c=1;c<=b;++c)
    {
    printf("*");
    }
    printf("\n");//this gets executed when the nested loop is falses
    }

}
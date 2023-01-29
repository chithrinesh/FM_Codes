#include <stdio.h>
int main()
{
int i,j=0;
char d[100];
printf("enter array press . to stop\n");
for ( i = 0; i < 100; i++)
{
    scanf("%d",&d[i]);
    if(d[i]=='.')
    {
        break;
    }
   
    j++;
}

     printf("the size of array = %d",count);
}
#include <stdio.h>
#include <math.h>
int main()
{
int i,j,x,y,b=0,sum=0,c=0;//declaring variable
int a[10][10];//creating array
printf("Enter value for x(rows)- max of 10: ");
scanf("%d", &x);//input for number of row
printf("Enter value for y(columns) - max of 10: ");
scanf("%d",&y);//input for number of columns
printf("Let's create a 2-D array: ");
for(i=0;i<x;i++)//nested loop to take elements as input
{
for(j=0;j<y;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Now printing the array: ");
printf("\n");
for(i=0;i<x;i++)//nested for loop to print the matrix
{
for(j=0;j<y;j++)
{
printf("\t");
printf("%d",a[i][j]);
}
printf("\n");
}
for(i=0;i<x;i++)//nested for loop for sum of all element
{
for(j=0;j<y;j++)
{
sum=sum+a[i][j];    ;
}
printf("\n");
}
printf("addition of element=%d\n",sum);
for(i=0;i<x;i++)//nested loop for sum of diagonal
 {
  for(j=0;j<y;j++)
  {
   if(i==j || i+j==x-1)//or condition to select diagonal elements
   {
    c = c + a[i][j];
   }
  }
 }
 printf("Sum of diagonal= %d\n", c);
return 0;
}
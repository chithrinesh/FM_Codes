#include<stdio.h>
void main()
{
    int a;//integer
    char b[100];//string
    char c;
    double d;
    printf("enter integer,string,characterand decimal");
    scanf("%d %s %c %lf",&a,&b,&c,&d);
    printf("the entered:\ninteger=%d \nstring=%s \ncharacter=%c \ndecimal=%lf",a,b,c,d);

}
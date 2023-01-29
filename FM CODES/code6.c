#include <stdio.h>  
#include <math.h>
int main()  
{  
    // declare local variables  
    char opt;  
    double n1,n2,res;    
    printf (" \n Enter the first number: ");  
    scanf(" %lf", &n1); // take fist number 
    printf (" Choose an operator(+,-, *, /,e,s,c,t) to perform the operation in C Calculator \n ");  
    scanf ("%c", &opt); // take an operator  
     if (opt=='+'||opt=='-'||opt=='e'||opt=='*'||opt=='/')
     {
        printf (" Enter the second number: ");  
    scanf (" %lf", &n2); // take second number  
      
     }
      
    switch(opt)  
    {  
        case '+':  
            res = n1+n2; // add two numbers  
            printf (" Addition of %.2lf and %.2lf is: %.2lf", n1, n2, res);  
            break;  
          
        case '-':  
            res = n1-n2; // subtract two numbers  
            printf (" Subtraction of %.2lf and %.2lf is: %.2lf", n1, n2, res);  
            break;  
              
        case '*':  
            res = n1*n2; // multiply two numbers  
            printf (" Multiplication of %.2lf and %.2lf is: %.2lf", n1, n2, res);  
            break;            
          
        case '/':  
            if (n2==0)   // if n2 == 0, take another number  
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%lf", &n2);        
                }  
            res = n1/n2; // divide two numbers  
            printf (" Division of %.2lf and %.2lf is: %.2lf", n1, n2, res);  
            break;  
        case 'e':
        {
            res=pow(n1,n2);
            printf("%.4lf^%.4lf=%.4lf\n",n1,n2,res);
            break;
        }
        case 's':
        {
            res=sin(n1);
            printf("sin(%.4lf) = %.4lf\n",n1,res);
        }
        case 'c':
        {
            res=cos(n1);
            printf("cos(%.4lf) = %.4lf\n",n1,res);
        }
        case 't':
        {
            res=tan(n1);
            printf("tan(%.4lf) = %.4lf\n",n1,res);
        }
        
    }
    return 0;  
}  
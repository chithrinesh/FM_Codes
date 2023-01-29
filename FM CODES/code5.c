#include <stdio.h>
void swap_ele(int *p, int *q)//function to swap element
{
int temp = *p;//swaping is done by declaring pointers so function can be called by reference 
*p = *q;
*q = temp;
}
void print_list(int a[], int size)//function to print the sorted list
{
int i;
for (i=0; i < size; i++)//the loop exist till last element of array
printf("%d ", a[i]);//prints the element of array
printf("\n");
}
int main()
{
char d;
int a[100],n,i,j,k,l,m;
printf("enter b for bubble sort and s for selection sort:\n");
scanf("%c",&d);
printf("enter the size of array:\n");
scanf("%d",&n);//enter size of array
printf("enter the elements of array:\n");
for(k=0;k<n;k++)//for loop for taking input of array
{
    scanf("%d",&a[k]);
}
printf("the unsorted array is:\n");
for(k=0;k<n;k++)
{
    printf("%d\n",a[k]);
}
if(d=='b')//executes bubble sort
{
for (i = 0; i < n-1; i++)//algorithm for bubble sort it loops till the the list is arranged in ascending order
{
for (j = 0; j < n-i-1; j++)
{
if (a[j] > a[j+1])
swap_ele(&a[j], &a[j+1]);//swap function is called
}
}
printf("Sorted list using bubble sort: \n");
print_list(a, n);
return 0;
}
if(d=='s')//executes selection sort
{
for(i = 0; i < n - 1; i++)
{
m=i;
for(j = i + 1; j < n; j++)
{
if(a[m] > a[j])
m=j;
}
if(k != i)
{
l=a[i];
a[i]=a[m];
a[m]=l;
}
}
printf("Sorted Array:\n");
for(i = 0; i < n; i++)
printf("%d\n", a[i]); 
return 0;
}
else
{
    printf("\ninvalid comment");
}

}

//write a function which will multi three num and conic by 3 numbers //
#include<stdio.h>
void product_ref(int*a,int*b,int*c)
{
int product=*a**b**c;
printf("%d",product);
}
void main()
{
    int a=2;
    int b=3;
    int c=4;
    product_ref(&a,&b,&c);
}
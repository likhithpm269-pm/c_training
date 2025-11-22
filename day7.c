//write a c program adding 3 numbewrs call by refernce//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sum_numbers(int *a,int*b,int*c)
{
int sum =*a+*b+*c;
printf("%d",sum);

}
void main()
{
int a=1;
int b=3;
int c=9;
sum_numbers(&a,&b,&c);

}
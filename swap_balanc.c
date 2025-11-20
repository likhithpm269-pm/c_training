#include<stdio.h>
void swap(float *b1,float *b2)
{
    printf("before HACKING :A has %f and B has %f",*b1,*b2);
    float temp  = 0;
    temp =*b1;
    *b1 = *b2;
    *b2 = temp;
    printf("after HACKING A has %f and B has %f",*b1,*b2);
}
void main ()
{
    float b1 ,b2 ;
    printf ( " enter the b1 ,b2 ");
    scanf("%f%f",&b1,&b2);
    swap (&b1 ,&b2);
} 
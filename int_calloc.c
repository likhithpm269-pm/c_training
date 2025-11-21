#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p=(float *)calloc(3,sizeof(float));
    p[0]=89.98;
    p[1]=78.97;
    p[2]=12.78;
    printf("%f\n%f\n%f\n",p[0],p[1],p[2]);
    free(p);
}
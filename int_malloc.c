#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *p= (int *) malloc(3* sizeof(int));
    p[0]=89;
    p[1]=78;
    p[2]=67;
    
    printf("%d\n ",p[0]);

}
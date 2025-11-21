#include<stdio.h>
#include<stdlib.h>
void main()
{
    
    int*p=(int*)malloc(3*sizeof(int));
    p[0]=67;
    p[1]=56;
    p[2]=89;
    printf("%d",p[0]);
    // increasing the size of intergers//
    p=(int*)realloc(p,5*sizeof(int));
    p[3]=4;
    p[4]=89;
    
    for(int i=0;i<5;i++)
    
        printf("%d\n",p[i]);
        free (p);
    
}

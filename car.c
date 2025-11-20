#include<stdio.h>
void main()
{
    int sale=0;
    int t;
    int q[3]={3,4,10};
    int c[3]={7,6,1};
    for(int i=0;i<3;i++)
    {
        t=q[i]*c[i];
        sale = sale+t;
    }
    
    printf("total is %d",sale);

    }
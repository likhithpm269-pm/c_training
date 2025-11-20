#include<stdio.h>
#include<string.h>
void main ()
{
    char des [100]="we are super childers";
    char se[10]= "super";
    if((strstr(des,se)) !=NULL)
    printf("found");
    else
    printf("not found");
}
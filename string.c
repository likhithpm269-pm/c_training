#include<stdio.h>
#include<string.h>
void main ()
{
    char name [8]="likhith";
    char new [10]="hello";
    printf("%c",name[6]);
    printf("length of string is %ld",strlen(name));
    strcat(new, name);
    printf("%s",new);
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
char name[100] ;
char age;
float marks;

};
void main()
{
    struct student s1;
    strcpy(s1.name,"likhi");
     s1.marks=89.78;
     s1.age = 19;


     struct student s2;
     strcpy(s2.name,"raj");
     s2.marks=90.89;
     s2.age=23;
     printf("age is %d",s2.age);

}
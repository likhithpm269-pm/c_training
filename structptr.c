#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks ;
};
void main()
{
    struct student s1 ;
    struct student *p=&s1;
    strcpy(p->name,"akshaya");
    p-> age = 45;
    p-> marks = 89.67;
    printf("age is %d\n",p->age);
    printf("marks is %f\n",p->marks);
    printf("%s\n",p->name);

}

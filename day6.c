//create structure with 3 variables name of the car ,max speed ,price,stores in a arry of structures and display them//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
  char name [100];
  float speed ;
  int price ;
};
void main()
{
    int n;
    printf("enter the number of car");
    scanf("%d",&n);
    struct car b[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the car name ");
        scanf("%s",b[i].name);


        printf("enter the speed");
        scanf("%f",&b[i].speed);

        printf("enter the price");
        scanf("%d",&b[i].price);
    }
    
        
        
    
}

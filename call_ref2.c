#include<stdio.h>
struct score
{
    float marks;
    int rank;

};
void edit(struct score *s1)
{
    
    printf("before the cahnge %f\n",s1->marks);
    s1->marks=67.89;
    printf("after the cahnge %f\n",s1->marks);


}
void main()
{
    struct score  s1={56.8,5};
    edit (&s1);
    printf("after the change in main %f\n",s1.marks);
}
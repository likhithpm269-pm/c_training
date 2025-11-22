#include<stdio.h>
void fake_swap(float ca,float cb)
{
    float temp=0;
    temp=ca;
    ca=cb;
    cb=temp;
    printf("fake swapis %f ca\n %f cb\n",ca ,cb);
}
void real_swap(float *ca,float *cb )
{
    float temp=0;
    temp=*ca;
    *ca=*cb;
    *cb=temp;
    printf("real swapis %f ca\n %f cb\n",*ca ,*cb);
}
void main()
{
    float ca ,cb;
    printf("currency A");
    scanf("%f",&ca);
    printf("currency B ");
    scanf("%f",&cb);
    fake_swap(ca,cb);

    printf("fake swap is ca= %f cb =%f\n",ca ,cb);
    
    real_swap(&ca,&cb);
    printf("real swap is ca= %f cb=%f\n",ca ,cb);
    

}

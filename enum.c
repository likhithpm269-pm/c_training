#include<stdio.h>
enum months
{
    jan=1,
    feb,mar,april,may,june,july,aug,sep,oct,nov,dec

};
void main()
{
enum months 
m=dec;
char *season;
switch(m)
{
    case dec:case jan:case feb:
    season="winter";
    break;
    case mar:case april:case may:
    season="summer";
    break;
    case june:case july :case aug:
    season ="monsoon";
    break;
    case sep:case oct :case nov:
    season ="sprint";
    break;
}
    printf("%d is %s",m,season);
}


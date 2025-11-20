#include <stdio.h>
int sum_digits_recur(int n)
{
    int digits, result;
    if (n == 0)
        return 0;
    digits = n % 10;
    return digits + sum_digits_recur(n / 10);
    
}
void main()
{
    int n;
    printf("enter the n");
    scanf("%d", &n);
    printf("%d", sum_digits_recur(n));
}
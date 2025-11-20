#include <stdio.h>

int sum_digits_recur (int n)
{
    if (n==0)
    return 0 ;
    int d = n%10;
    return d + sum_digits_recur(n/10);
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("sum of digits: %d",sum_digits_recur(n));
    return 0;
    
}
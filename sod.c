#include <stdio.h>
int sum_digits (int n)
{
    int digit,result = 0;
    while (n!=0)
    {
        digit = n%10;
        result = result + digit;
        n = n/10;
    }
    return result;
}
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("sum of digit is %d",sum_digits(n));
}

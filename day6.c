//write a c program which adds 3 nos and call it by reference
#include <stdio.h>
void add(int*a,int*b,int*c)
{
    int sum;
    sum = *a+*b;
    *c+sum;
};
int main()
{
    int a,b,c;
    printf("enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    add(&a,&b,&c);
    printf("sum is %d",c);
    return 0;
}


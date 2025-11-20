#include <stdio.h>
void main()
{
    int arr[4] = {58,89,67,56};
    int *p = arr;
    printf("%d", *p);
    printf("%d\n",*(p+1));
}

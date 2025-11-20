#include<stdio.h>
void bubble (int arr[],int n)
{
    int tem=0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            while(arr[i]<arr[j])
            {
                tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }
    }
    for int(k = 0; k<n; k++)
    {
        printf("%d/n",arr[k]);
    }
}
int main ()
{
    int arr[5] ={10,13,45,6,19};
    int n = 5;
    bubble( arr,n);
}


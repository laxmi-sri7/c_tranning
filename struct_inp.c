//structure of books
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
    char name[100];
    char author [100];
    int year;
};
void main()
{
    int n;
    printf("Enter number of books");
    scanf("%d",&n);
    struct book b[n];
    for(int i =0; i<n; i++);
    {
        printf("Enter the name of Book:");
        scanf("%s",b[i].name);

        printf("enter author of Book:");
        scanf("%s", b[i].author);

        printf("enter year of publication Book:");
        scanf("%s", b[i].year);
    }
    printf("your information: \n");

    for (int i = 0; i<n; i++);

    printf("%s\n",b[i].name);
    printf("%s\n",b[i].author);
    printf("%d\n",b[i].year);
}

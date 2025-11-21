#include <stdio.h>
void names (char first[],char last[])
{
    int i = 0;
    char full[100];
    while (first[i]!='\0')
    {
        full[i] = first[i];
        i++;
    }

    full[i] =' ';
    i++;

    int j = 0;
    while (last[j]!= '\0')
    {
        full[i] = last[j];
        i++;
        j++;
    }
    printf("%s",full);
}
void main()
{
    char first[100],last[100];
    printf("enter your first name:");
    scanf("%s",first);
    printf("enter your last name:");
    scanf("%s",last);
    names(first,last);
}
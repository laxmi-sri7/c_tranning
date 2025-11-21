#include <stdio.h>
void names (char first[],char last[],int sw)
{
    int i = 0;
    char full[100];
    while (first[i]!='\0')
    {
        full[i] = first[i];
        i++;
    } 
    full[i] = ' ';
    i++;
    int j = 0;
    printf("%s",full);
    int len = i+1;
    if (len<sw)
    printf("fits in the screen");
    else
    printf("doesn't fit in the screen");
}
void main()
{
    char first[20],last[20];
    printf("enter the first name");
    scanf("%f",first);
    printf("enter the last name");
    scanf("%f",last);
    int sw=6;
    names(first,last,sw);
}
    

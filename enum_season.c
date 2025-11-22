#include <stdio.h>
enum month
{
    jan=1,


    feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};

void main()
{
    enum month m;
    m= feb;
    char *season;
    switch(m)
    {
        case dec: case jan: case feb: 
        season = "Winter";
        break;
        case mar: case apr: case may:
        season = "Summer";
        break;
        case jun: case jul: case aug:
        season = "Monsoon";
        break;
        case sep: case oct: case nov:
        season = "spring";
        break;
    }
    printf("%d month is %s", m, season);
}
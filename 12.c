// Input minutes and convert in hours and minutes.

#include <stdio.h>
#include <math.h>
int main()
{
    float m,h,mi,s;

   // m=60;
    printf("Enter a minutes : ");
    scanf("%f",&m);
    s = 60;
    h = m/s;
    mi = fmod(m,s);
    printf("\n%.f hours %.f minutes",h,mi);
}

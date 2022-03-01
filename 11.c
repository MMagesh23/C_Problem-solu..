// Input distance (in km) and convert in meter, feet, inches and centimeter.

#include<stdio.h>
int main()
{
    float km,m,f,i,cm;

    printf("Enter a Distance(km) : ");
    scanf("%f",&km);

    m = km*1000;
    //f =
    //i =
    cm = m*100;

    printf("\nkilometer  = %.2f km",km);
    printf("\nMeter      = %.2f m",m);
    //printf("\nFeet       = %.2f feet",f);
    //printf("\nInches     = %.2f inch",i);
    printf("\nCentimeter = %.2f cm",cm);


}

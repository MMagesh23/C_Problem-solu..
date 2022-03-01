/*WAP to convert temperature from Fahrenheit to Celsius. C=(F-32)*5/9*/

#include<stdio.h>
int main()
{
    float F,C;

    printf("Enter a Fahrenheit : ");
    scanf("%f",&F);

    C = (F-32)*5/9;
    printf("\nCelsius = %.2f",C);
}

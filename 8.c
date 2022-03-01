//WAP to convert temperature from Celsius to Fahrenheit. F=C*9/5+32

#include<stdio.h>
int main()
{
    float F,C;

    printf("Enter a Celsius : ");
    scanf("%f",&C);

    F = C*9/5+32;
    printf("\nFahrenheit = %.2f",F);
}

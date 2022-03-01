/*WAP to input principal, rate and time and calculate Simple Interest. Simple
Interest=Principal*Rate*Time/100*/
#include <stdio.h>
int main()
{
    int p,r,t,I;

    printf("Enter a principle : ");
    scanf("%d",&p);

    printf("\nEnter a rate : ");
    scanf("%d",&r);

    printf("\nNo.of year : ");
    scanf("%d",&t);

    I = (p*r*t)/100;

    printf("\nInterest is %d ",I);
}

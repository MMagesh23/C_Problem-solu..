// Input two numbers and swap them without using 3rd variable.

#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter a 1st number : ");
    scanf("%d",&a);

    printf("Enter a 2nd number : ");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("\n%d %d",a,b);
}

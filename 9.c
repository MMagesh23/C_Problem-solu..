//Input two numbers and swap them.

#include<stdio.h>
int main()
{
    //int a=10,b=20;
    int a,b;

    printf("Enter a number 1 : ");
    scanf("%d",&a);

    printf("Enter a number 2 : ");
    scanf("%d",&b);

    a = a-b;
    b = a+b;
    a = b-a;

    printf("\n %d %d",a,b);

}

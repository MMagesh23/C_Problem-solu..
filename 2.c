//2. WAP to input length and breadth of a rectangle and calculate its area. Area=Length*Breadth.

#include<stdio.h>
int main()
{
    int b,l,area;

    printf("Enter a length = ");
    scanf("%d",&b);
    printf("Enter a breadth = ");
    scanf("%d",&l);

    area = b*l;

    printf("Rectangle area is %d",area);
}

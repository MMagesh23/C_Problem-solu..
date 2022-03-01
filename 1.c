//1.Input number and calculate its square and cube.
#include<stdio.h>
int main()
{
	int n,sqr,cub;

    printf("Enter a number : ");
    scanf("%d",&n);

    sqr = n*n;
    cub = n*n*n;

    printf("\n squre = %d \ncube = %d",sqr,cub);
}

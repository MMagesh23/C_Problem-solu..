/*WAP to input radius and height of a cylinder and calculate volume of
cylinder. Volume=3.14*r*r*h.*/

int main()
{
    float r,h,V;

    printf("Enter a radius : ");
    scanf("%f",&r);

    printf("\nEnter a hight : ");
    scanf("%f",&h);

    V = 3.14*pow(r,2)*h;

    printf("\nVolume is %0.2f",V);
}

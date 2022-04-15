/*Input 5 subject marks of a student and find total marks and
percentage obtained by the student.*/

int main()
{
    float T,E,M,S,SS,Total,P;

    printf("\nEnter a tamil mark          : ");
    scanf("%f",&T);

    printf("\nEnter a English mark        : ");
    scanf("%f",&E);

    printf("\nEnter a Maths mark          : ");
    scanf("%f",&M);

    printf("\nEnter a Science mark        : ");
    scanf("%f",&S);

    printf("\nEnter a Social Science mark : ");
    scanf("%f",&SS);

    Total = T+E+M+S+SS;
    P=(Total*100)/500;

    printf("\nTotal      : %.2f ",Total);
    printf("\nPercentage : %.2f",P);

}

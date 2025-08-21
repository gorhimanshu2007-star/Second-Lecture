#include <stdio.h>
int main()
{
    float a,b,c;
printf("Enter 1st number:");
    scanf("%f",&a);
    printf("Enter 2nd number:");
    scanf("%f",&b);
    printf("Enter 3rd number:");
    scanf("%f",&c);
    if (a>b && a>c)
        printf("1st number is the largest\n");
    else if (b>a && b>c)
        printf("2st number is the largest\n");
    else
        printf("3rd number is the largest\n");

    if (a<b && a<c)
        printf("1st number is the smallest");
    else if (b<a && b<c)
        printf("2st number is the smallest");
    else
        printf("3rd number is the smallest");
}
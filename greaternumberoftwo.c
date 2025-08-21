# include<stdio.h>
int main()
{
float a,b;
    printf("Enter first number:");
    scanf("%f",&a);
    printf("Enter second number:");
    scanf("%f",&b);
    if (a>b)
printf("first number is greater than second number.");
    else if (b>a)
        printf("second number is greater than first number.");
}
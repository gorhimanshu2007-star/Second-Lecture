#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a%7==0)
        printf("The entered number is divisible by 7");
    else if (a%7>0)
        printf("The entered number is not divisible by 7");
}
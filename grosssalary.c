#include<stdio.h>
void main()
{
    float a,b,c,d;
    printf("Enter gross salary (has to be more than 5000)\n");
    scanf("%f", &a);

    if(a>10000)
    {
        b = 0.1*a;
        c = 0.03*a;
        d = a + b - c;
    }
    else
    {
        b = 0.07*a;
        c = 0.02*a;
        d = a + b - c;
    }
    printf("%f\n%f\n%f\n", b,c,d);

    
}  
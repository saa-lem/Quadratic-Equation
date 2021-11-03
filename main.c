/*
    Project: Quadratic Equation Solution.
    Author:  Salem Owino.
    Date:    Oct 26th, 2021.
    Compiler: GCC.
    Language: C99
    License:  MIT


    inputs -> a, b, c
    outputs -> x1, x2

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //variable declarations
    int a;
    int b;
    int c;
    float x1;
    float x2;


    //capture input
    printf("\tQuadratic Equation Solver!\n");
    printf("Enter the values a, b, and c:\n");
    scanf("%d%d%d", &a,&b,&c);

    //computation
    if((b * b - 4 * a * c) == 0)
    {
        x1 = x2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    }

    if((b * b - 4 * a * c) > 0)
    {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    }

    if((b * b - 4 * a * c) < 0)
    {
        printf("\nThe equation has no roots\n");
        exit(1);
    }

    //output
    printf("The values of x are %f and %f\n", x1,x2);

    return 0;

}


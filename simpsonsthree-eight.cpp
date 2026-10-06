#include<stdio.h>
#include<math.h>

#define f(x) sqrt(sin(x))

int main()
{
    float a, b, integration = 0.0, h, x0, x1, x2, x3;

    printf("Enter lower limit of integration (a): ");
    scanf("%f", &a);
    printf("Enter upper limit of integration (b): ");
    scanf("%f", &b);

    // Simpson's 3/8 Rule requires exactly 3 subintervals (4 points)
    h = (b - a) / 3;

    x0 = a;
    x1 = a + h;
    x2 = a + 2 * h;
    x3 = b;

    // Simpson's 3/8 Rule formula: (3h/8) * [f(x0) + 3f(x1) + 3f(x2) + f(x3)]
    integration = (3 * h / 8) * (f(x0) + 3 * f(x1) + 3 * f(x2) + f(x3));

    printf("\nRequired value of integration (Simpson's 3/8 rule) is: %.3f", integration);

    return 0;
}
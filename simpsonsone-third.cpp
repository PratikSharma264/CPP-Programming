#include<stdio.h>
#include<math.h>

#define f(x) sqrt(sin(x))

int main()
{
    float a, b, integration = 0.0, h, x0, x1, x2;

    printf("Enter lower limit of integration (a): ");
    scanf("%f", &a);
    printf("Enter upper limit of integration (b): ");
    scanf("%f", &b);

    // Simpson's 1/3 Rule requires exactly 2 intervals (3 points)
    h = (b - a) / 2;
    x0 = a;
    x1 = a + h;
    x2 = b;

    // Simpson's 1/3 Rule formula: (h/3) * [f(x0) + 4f(x1) + f(x2)]
    integration = (h / 3) * (f(x0) + 4 * f(x1) + f(x2));

    printf("\nRequired value of integration (Simpson's 1/3 rule) is: %.3f", integration);

    return 0;
}

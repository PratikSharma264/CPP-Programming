#include<stdio.h>
#include<math.h>

#define f(x) sqrt(sin(x))

int main()
{
    float a, b, integration = 0.0, h;

    printf("Enter lower limit of integration (a): ");
    scanf("%f", &a);
    printf("Enter upper limit of integration (b): ");
    scanf("%f", &b);

    h = b - a;

    // Simple Trapezoidal Rule: (h / 2) * [f(a) + f(b)]
    integration = (h / 2) * (f(a) + f(b));

    printf("\nRequired value of integration (simple trapezoidal) is: %.3f", integration);

    return 0;
}

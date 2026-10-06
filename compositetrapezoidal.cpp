//composite trapezoidal
#include<stdio.h>
#include<math.h>

#define f(x) sqrt(sin(x))

int main()
{
    float a, b, integration = 0.0, h, k;
    int i, n;

    printf("Enter lower limit of integration (a): ");
    scanf("%f", &a);
    printf("Enter upper limit of integration (b): ");
    scanf("%f", &b);
    printf("Enter number of sub intervals (n): ");
    scanf("%d", &n);

    h = (b - a) / n;

    integration = f(a) + f(b);
    for(i = 1; i <= n - 1; i++)
    {
        k = a + i * h;
        integration = integration + 2 * f(k);
    }

    integration = integration * h / 2;

    printf("\nRequired value of integration is: %.3f", integration);

    return 0;
}

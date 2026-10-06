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
    printf("Enter number of sub intervals (n, must be multiple of 3): ");
    scanf("%d", &n);

    if (n % 3 != 0)
    {
        printf("\nError: Number of sub intervals must be a multiple of 3 for Simpson's 3/8 rule.\n");
        return 1;
    }

    h = (b - a) / n;
    integration = f(a) + f(b);

    for (i = 1; i < n; i++)
    {
        k = a + i * h;
        if (i % 3 == 0)
            integration += 2 * f(k);
        else
            integration += 3 * f(k);
    }

    integration = integration * (3 * h / 8);

    printf("\nRequired value of integration (Composite Simpson's 3/8 rule) is: %.3f", integration);

    return 0;
}
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
    printf("Enter number of sub intervals (n, must be even): ");
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        printf("\nError: Number of sub intervals must be even for Simpson's 1/3 rule.\n");
        return 1;
    }

    h = (b - a) / n;

    integration = f(a) + f(b);

    for(i = 1; i < n; i++)
    {
        k = a + i * h;
        if (i % 2 == 0)
            integration += 2 * f(k);
        else
            integration += 4 * f(k);
    }

    integration = integration * h / 3;

    printf("\nRequired value of integration (Composite Simpson's 1/3 rule) is: %.3f", integration);

    return 0;
}
#include <stdio.h>
#include <math.h>

#define f(x) sqrt(sin(x))  // Example function, replace as needed

int main() {
    float a, b, h, integral;
    float x0, x1, x2, x3, x4;

    printf("Enter lower limit of integration (a): ");
    scanf("%f", &a);
    printf("Enter upper limit of integration (b): ");
    scanf("%f", &b);

    h = (b - a) / 4.0;

    x0 = a;
    x1 = a + h;
    x2 = a + 2 * h;
    x3 = a + 3 * h;
    x4 = b;

    integral = (2 * h / 45) * (7 * f(x0) + 32 * f(x1) + 12 * f(x2) + 32 * f(x3) + 7 * f(x4));

    printf("Approximate value of the integral using Boole's Rule: %.6f\n", integral);

    return 0;
}

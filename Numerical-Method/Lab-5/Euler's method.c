#include <stdio.h>

double f(double x, double y) {
    return x + y;
}

int main() {
    double x0, y0, x, h;
    int steps;

    printf("Enter initial value of x0: ");
    scanf("%lf", &x0);
    printf("Enter initial value of y0: ");
    scanf("%lf", &y0);
    printf("Enter the value of x at which to evaluate the function: ");
    scanf("%lf", &x);
    printf("Enter the step size (h): ");
    scanf("%lf", &h);

    steps = (int)((x - x0) / h);

    double xi = x0;
    double yi = y0;
    for (int i = 0; i < steps; i++) {
        yi = yi + h * f(xi, yi);
        xi = xi + h;
    }

    printf("The value of y at x = %.2f is: %.6f\n", x, yi);

    return 0;
}

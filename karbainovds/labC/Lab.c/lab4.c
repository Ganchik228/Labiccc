#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double func(double x) {
    double f;
    if (0 <= x && x <= 1) {
        f = cos(x)*exp(-(x*x));
    } 
    else if (1 < x && x <= 2) {
        f = log(x+1) - sqrt(4-x*x);
    }
    return f;
}

double integrate(double n, double h) {
    double integral = 0;
    for (int i = 0; i < n; i += 1) {
        double f = func(i * h + h / 2);
 integral += f * h;
    }
    return integral;

}

int main() {
    float ep;
    printf("Enter ep ->  ");
    scanf("%f", &ep);
    int a = 0, b = 2;
    int n = 2;
    double h = (double)(b - a) / (double)n;
    double f_integral_1, f_integral_2;
    f_integral_1 = integrate(n, h);
    n *= 2;
    h = (double)(b - a) / (double)n;
    f_integral_2 = integrate(n, h);
    while ((f_integral_1 - f_integral_2) / 3 > ep) {
        h = (double)(b - a) / (double)n;
        f_integral_1 = f_integral_2;
        n *= 2;
        h = (double)(b - a) / (double)n;
        f_integral_2 = integrate(n, h);
    }
    printf("integral = %.5lf \n", f_integral_2);
    return 0;
}

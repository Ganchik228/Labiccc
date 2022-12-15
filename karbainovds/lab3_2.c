#include <stdio.h>
#include <math.h>

double x1;

double f1(double x){
    return cos(x)*exp(-(pow(x, 2)));
    }

double f2(double x){
    x1 = 4.0 > pow(x, 2) ? 4.0 - pow(x, 2) : 0;
    return log(x+1)-sqrt(x1);
}

int main()
{
    double x=0, y, h;
    int iter;
    printf("Введите шаг - h ->");
    scanf("%lf", &h);
    iter = 2/h;
    for(int n_iter=0; iter>=n_iter; n_iter++){
        if (n_iter<(iter/2)){
            y = f1(x);
        }
        else {
            y = f2(x);
        }
        printf("%f %f\n", x, y);    
        x = x + h;    
    
    }
    
}
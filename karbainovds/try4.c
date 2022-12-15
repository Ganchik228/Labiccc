#include <stdio.h>
#include <math.h>
double x1;

double f1(double x){
    return cos(x)*exp(-(x*x));
    }

double f2(double x){
    x1 = 4.0 > pow(x, 2) ? 4.0 - pow(x, 2) : 0;
    return log(x+1)-sqrt(x1);
}

int main(){
    int a = 0, b=2, n, h, i;
    double sum=0, x, y;
    printf("Введите кол-во треугольников ->");
    scanf("%d", &n);
    h = (b-a)/n;
    for(i=0; i<=n-1; i++){
        x = a + i*h;
        
        if (i<=(n-1)/2){
            y = f1(x+(h/2));
            
        }
        else{
            y = f2(x+(h/2));
        }
        printf("%lf\n", y);
        sum +=h*y;
        
    }
    printf("%f\n", sum);
}
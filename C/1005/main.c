#include <stdio.h>

int main(){
    double A, B, avrg;
    const double w_a = 3.5;
    const double w_b = 7.5;


    scanf("%lf", &A);
    scanf("%lf", &B);

    avrg = (w_a*A + w_b*B)/(w_a + w_b);

    printf("MEDIA = %.5lf\n", avrg);
}
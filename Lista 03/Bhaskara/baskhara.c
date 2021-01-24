#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C, delta, R1, R2;
    scanf("%lf %lf %lf", &A, &B, &C);
    if (A == 0){ 
        printf("Impossivel Calcular\n");
    }else{
        //Calculo de delta
        delta = pow(B, 2) - (4*A*C);
        if (delta < 0 ){
            printf("Impossivel Calcular\n");
        }else{
            //Calculo das raizes
            R1 = (-B+sqrt(delta))/(2*A);
            R2 = (-B-sqrt(delta))/(2*A);
            //print
            printf("R1 = %.5lf\n",R1);
            printf("R2 = %.5lf\n",R2);
        }
    }
    return 0;
}

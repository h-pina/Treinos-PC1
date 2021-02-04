#include <stdio.h>
#include <math.h>


int main(){
    
    double A, B, C, tmp;
    scanf("%lf %lf %lf", &A, &B, &C);
    double ordenados[3] = {A, B, C};
    int i;
    for(i = 0; i<3;i++){
        if(ordenados[i] > ordenados[0]){
            tmp = ordenados[0];
            ordenados[0] = ordenados[i];
            ordenados[i] = tmp;
        }else if (ordenados[i]<ordenados[2]){
            tmp = ordenados[2];
            ordenados[2] = ordenados[i];
            ordenados[i] = tmp;
        }
    }

    A = ordenados[0];
    B = ordenados[1];
    C = ordenados[2];

    if(A>=(B+C)){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if(pow(A,2) == (pow(B,2) + pow(C,2))){printf("TRIANGULO RETANGULO\n");}
        if(pow(A,2) > (pow(B,2) + pow(C,2))){printf("TRIANGULO OBTUSANGULO\n");}
        if(pow(A,2) < (pow(B,2) + pow(C,2))){printf("TRIANGULO ACUTANGULO\n");}
        if(A == B && B == C){printf("TRIANGULO EQUILATERO\n");}
        if((A == B && B != C) || (A == C && B != A) || (B == C && A != C)){printf("TRIANGULO ISOSCELES\n");}
    }


    return 0;
}

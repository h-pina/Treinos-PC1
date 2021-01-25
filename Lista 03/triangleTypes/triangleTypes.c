#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C, v1, v2, v3;
    scanf("%lf %lf %lf", &A, &B, &C);
    
    if(B!=A && A!=C && B!=C){    
        if(A>=B && A>C){
            v1 = A;
            if(B>C){
                v2 = B;
                v3 = C;
            }else{
                v2 = C;
                v3 = B;
            }
        }else if(B>A && B>C){
            v1 = B;    
            if(A>C){
                v2 = A;
                v3 = C;
            }else{
                v2 = C;
                v3 = A;
            }
        }else{
            v1 = C;
            if(A>B){
                v2 = A;
                v3 = B;
            }else{
                v2 = B;
                v3 = A;
            }
        }
    }else{
        if(B==A){
            if(C>A){
                v1 = C;
                v2 = A;
                v3 = B;
            }else{
                v1 = A;
                v2 = B;
                v3 = C;
            }
        } else if(A==C){            
            if(B>A){
                v1 = B;
                v2 = A;
                v3 = C;
            }else{
                v1 = A;
                v2 = C;
                v3 = B;
            }
        }else if(B==C){            
            if(A>B){
                v1 = A;
                v2 = B;
                v3 = C;
            }else{
                v1 = B;
                v2 = C;
                v3 = A;
            }
        }
    }

    printf("%lf %lf %lf\n", v1, v2, v3);
    float pv1, pv2, pv3;
    pv1 = pow(v1,2);
    pv2 = pow(v2,2);
    pv3 = pow(v3,2);

    if(v1>=(v2+v3)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else    {
        if(pv1==(pv2+pv3)){printf("TRIANGULO RETANGULO\n");}
        if(pv1>(pv2+pv3)){printf("TRIANGULO OBTUSANGULO\n");}
        if(pv1<(pv2+pv3)){printf("TRIANGULO ACUTANGULO\n");}
        if(v1==v2 && v2==v3 ){printf("TRIANGULO EQUILATERO\n");}
        if((v1==v2&&v3!=v2)||(v1==v3&&v3!=v2)||(v2==v3&&v3!=v1)){printf("TRIANGULO ISOSCELES\n");}
    }

    return 0;

}

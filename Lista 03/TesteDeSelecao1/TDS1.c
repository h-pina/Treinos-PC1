#include <stdio.h>


int main(){
    int A, B, C, D, result;
    scanf("%i %i %i %i", &A, &B, &C, &D);
    result = 0;
    if ((B>C)&&(D>A)){
        if((C+D) > (A+B)){
            if(C>0 && D>0){
                if (A%2 == 0){result = 1;}
            }
        }
    }

    switch(result){
        case 0:
            printf("Valores nao aceitos\n");
            break;
        case 1:
            printf("Valores aceitos\n");
            break;
    }
    return 0;
}

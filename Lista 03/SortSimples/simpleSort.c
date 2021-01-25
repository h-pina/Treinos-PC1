#include <stdio.h>


int main(){
    int A, B, C, v1, v2, v3;
    scanf("%i %i %i", &A, &B, &C);
    
    if(A>B && A>C){
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


    printf("%i\n", v3);
    printf("%i\n", v2);
    printf("%i\n", v1);
    printf("\n");
    printf("%i\n",A);
    printf("%i\n",B);
    printf("%i\n",C);

    return 0;

}

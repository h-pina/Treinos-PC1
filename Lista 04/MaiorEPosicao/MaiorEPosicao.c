#include <stdio.h>

int main(){

    int i, tmp, maior, posicao;
    maior = 0;
    for(i =1; i<=100; i++){
        scanf("%i", &tmp);
        if(tmp > maior){
            maior = tmp;
            posicao = i;
        }
    }
    printf("%i\n", maior);
    printf("%i\n", posicao);


    return 0;
}

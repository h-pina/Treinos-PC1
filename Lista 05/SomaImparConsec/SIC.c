#include <stdio.h>
#include <stdlib.h> 

int main(){
    int x, y, sum;
    scanf("%i", &x); //Obtencao dos valores
    scanf("%i", &y);
    sum=0;

    if(x>y){        //Define se x é maior que y e, dependendo do resultado, subtrai y ou x para percorrer todos os valores no intervalo
        x--; //x-1 antes do loop pois o intervalo e aberto
        while(x>y){
            if(x%2 != 0){
                sum+=x;
            }
            x--;
        }
    }else if(y>x){
        y--;
        while(y>x){
            if(y%2 != 0){
                sum+=y;
            }
            y--;
        }
    }

    printf("%i\n", sum);//imprime o valor
    return 0;

}

#include <stdio.h>

int main(){
    float value;
    scanf("%f", &value);
    
    if(value<0 || value >100){
        printf("Fora de intervalo\n");
    }else if(0<=value && value<=25){
        printf("Intervalo [0,25]\n");
    }else if(25<value && value<=50){
        printf("Intervalo (25,50]\n");
    }else if(50<value && value<=75){
        printf("Intervalo (50,75]\n");
    }else if(75<value && value<=100){
        printf("Intervalo (75,100]\n");
    }
    return 0;
}

#include <stdio.h>

int main(){
    int input, ano, mes, dias;
    scanf("%i", &input);
    
    ano = input/365;
    input -= ano*365;
    mes = input/30;
    input -= mes*30;
    dias = input;

    printf("%i ano(s)\n", ano);
    printf("%i mes(es)\n", mes);
    printf("%i dia(s)\n", dias);


    
    return 0;
}


#include <stdio.h>

int main(){
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    int numcedulas[7];
    int valor, valortmp;
    scanf("%i", &valor);
    
    valortmp = valor;
    for (int i  = 0; i < 7; i++){
        numcedulas[i] = valortmp/cedulas[i];
        if (valortmp > 0){
            valortmp -= numcedulas[i]*cedulas[i];
        }
    }

    printf("%i\n", valor);
    for (int z = 0; z < 7; z++){
        printf("%i nota(s) de R$ %i,00\n", numcedulas[z], cedulas[z]);
    }
    return 0;
}


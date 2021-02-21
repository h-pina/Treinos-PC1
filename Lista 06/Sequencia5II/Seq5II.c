#include <stdio.h>


int main(){
  float numerador, denominador, S;
  S = 0;
  numerador = 1;
  denominador = 1;
  while (numerador <= 39){
    S += numerador/denominador;
    numerador += 2;
    denominador *= 2;
  }
  printf("%.2f\n", S);


  return 0;
}

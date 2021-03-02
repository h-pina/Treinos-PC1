#include <stdio.h>


int main (){
  int tempArraySize;
  scanf("%i", &tempArraySize);
  const int arraySize = tempArraySize; //transformacao do input em uma constante para declarar a array

  int X[arraySize], index = 0; //definicao da array

  while(index<arraySize){ //preenchimento da array
    scanf("%i", &X[index]);
    index++;
  }


  int menor, pos;
  menor = X[0]; //colocando um valor qualquer para iniciar as comparacoes
  for(index = 0; index<arraySize; index++){ //reaproveitando a variavel index
    if(X[index] < menor){
      menor = X[index];
      pos = index;
    }
  }

  printf("Menor valor: %i\n", menor);
  printf("Posicao: %i\n", pos);
  
  return 0;
} 

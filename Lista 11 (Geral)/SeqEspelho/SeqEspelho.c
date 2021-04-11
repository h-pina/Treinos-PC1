#include <stdlib.h>
#include <stdio.h>

void printReverse(int value){ // transforma inteiro em string e imprime seus digitos espelhados
  char num[10];
  int numlenght;
  sprintf(num, "%i", value);
  for(numlenght = 0; num[numlenght] >=48 && num[numlenght] <= 57; numlenght++){} 
  numlenght--;
  for(;numlenght>=0;numlenght--){
    printf("%c",num[numlenght]);
  }
}

int main(){ 
  int testCases, min, max;
  int value;
  scanf("%i", &testCases);

  while(testCases){
    scanf("%i %i", &min, &max); // coleta valores maximos e minimos 
    for (value = min;value<=max;value++){ //imprime a sequencia normal
      printf("%i",value);
    }
    for(value = max; value>=min;value--){ // imprime a sequencia invertida
      printReverse(value);
    }

    printf("\n"); 

    testCases--;
  }
  return 0;
}

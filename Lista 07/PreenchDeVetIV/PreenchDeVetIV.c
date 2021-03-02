#include <stdio.h>

void clearArray(int *array){
  int i;
  for(i = 0; i<5; i++){
    array[i] = 0;
  }
}

void printArray(int *array, int qual){
  int i;
  for(i = 0; i<5; i++){
    if(qual == 0){
      printf("par[%i] = %i\n", i, array[i]);
    }else if(qual == 1){
      printf("impar[%i] = %i\n", i, array[i]);
    }
  }
}


int main(){
  
  int pares[5], impares[5], inputs, num, indexpar, indeximpar;
  
  indexpar = 0; 
  indeximpar = 0;
  
  for(inputs = 0; inputs < 15; inputs++){
    scanf("%i", &num);
    if(num%2==0){
      pares[indexpar] = num;
      indexpar++;
      if(indexpar == 5){
        indexpar = 0;
        printArray(pares, 0);
        clearArray(pares);
      }
    }
    else{
      impares[indeximpar] = num;
      indeximpar++;
      if(indeximpar == 5){
        indeximpar = 0;
        printArray(impares, 1);
        clearArray(impares);
      }  
    }
  }
  
  int index2;
  for(index2 = 0; index2<indeximpar; index2++){printf("impar[%i] = %i\n", index2, impares[index2]);}
  for(index2 = 0; index2<indexpar; index2++){printf("par[%i] = %i\n", index2, pares[index2]);}


  return 0;
}


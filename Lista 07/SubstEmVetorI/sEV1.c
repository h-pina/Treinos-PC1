#include <stdio.h>
#include <stdlib.h>

int main (){

  int X[10], index;

  for(index = 0; index < 10; index++){
    scanf("%i", &X[index]);
    if(X[index] <= 0){
      X[index] = 1;
    }
  }

  for(index = 0; index < 10; index++){
    printf("X[%i] = %i\n", index, X[index]);
  }

  return 0;
}


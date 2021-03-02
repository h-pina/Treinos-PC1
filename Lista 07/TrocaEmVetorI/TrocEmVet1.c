#include <stdio.h>


int main (){

  int N[20], index, temp;
  for (index = 0; index < 20; index++){
    scanf("%i", &N[index]);
  }

  for (index = 0; index < 10; index++){
    temp = N[index];
    N[index] = N[19-index];
    N[19 - index] = temp;
  }

  for(index = 0; index<20; index++){
    printf("N[%i] = %i\n", index, N[index]);
  }
  return 0;
}


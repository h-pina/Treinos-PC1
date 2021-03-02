#include <stdio.h>


int main(){
  
  int N[10], index;

  scanf("%i", &N[0]);
  for (index = 1; index < 10; index++){
    N[index] = (N[index - 1])*2;
  }

  for (index = 0; index < 10; index++){
    printf("N[%i] = %i\n", index, N[index]);
  }

  return 0;
}


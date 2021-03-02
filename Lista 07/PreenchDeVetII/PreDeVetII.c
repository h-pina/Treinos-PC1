#include <stdio.h>

int main (){

  int N[1000],index, looplimit, count;
  scanf("%i", &looplimit);
  count = 0;
  for(index = 0; index<1000; index++){
    N[index] = count;
    count++;
    if(count == looplimit){count = 0;}
  }

  for (index = 0;index<1000; index++){
    printf("N[%i] = %i\n", index, N[index]);
  }

  return 0;
}

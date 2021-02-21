#include <stdio.h>

int main (){
  float S = 0;
  int index;

  for (index = 1; index <= 100; index++){
    S += 1/(float)index;
  }
  printf("%.2f\n", S);
  return 0;
}

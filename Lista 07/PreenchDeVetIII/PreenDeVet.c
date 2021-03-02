#include <stdio.h>

int main (){
  double N[100], initialValue;
  int index;
  scanf("%lf", &initialValue);
  N[0] = initialValue;
  for (index = 1; index<100; index++){
    N[index] = N[index-1]/(double)2;
  }
  
  for(index = 0; index<100; index++){
    printf("N[%i] = %.4lf\n",index, N[index]);
  }
}

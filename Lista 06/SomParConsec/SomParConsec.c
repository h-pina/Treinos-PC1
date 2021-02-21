#include <stdio.h>

int sumConsecutives(int initialValue){
  int index, sum;
  sum = 0;
  if(initialValue%2 != 0){
    initialValue += 1;
  }

  for (index = 0; index < 5; index++){
    sum += initialValue + (2*index);
  }
  return sum;
}


int main(){
  int value, result;
  scanf("%i", &value);
  while(value != 0){
    result = sumConsecutives(value);
    printf("%i\n", result);
    scanf("%i", &value);
  }
  return 0;
}

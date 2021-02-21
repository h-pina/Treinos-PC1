#include <stdio.h>

int main (){
  int last, penult, next, count, i;
  scanf("%i", &count); //definig variable values
  penult = 0;
  last = 1;
  
  if (count == 1){ // edge case
    printf("%i\n", penult);
  }
  if (count >= 2){ // main logic
    printf("%i %i", penult, last);

    for(i = 2; i<count; i++){
      next = penult + last;
      penult = last;
      last = next;
      printf(" %i", next);
    }
    printf("\n");
  }
  return 0;
}

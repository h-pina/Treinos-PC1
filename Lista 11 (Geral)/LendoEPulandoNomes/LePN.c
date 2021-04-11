#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
  char input[35], three[35], seven[35], nine[35];
  int count = 1;
  while(fgets(input, 35, stdin)){ //A primeira leitura e feita fora do loop de contagem, porem isso e compensado inicializando count = 1. Isso foi feito para manter o loop continuo ate EOF
    while(count < 10){
      switch(count){
        case 3:
          strcpy(three,input);
          break;
        case 7:
          strcpy(seven,input);
          break;
        case 9:
          strcpy(nine, input);
          break;
      }

      fgets(input,35,stdin);
      count++;
    }
    printf("%s",three);
    printf("%s",seven);
    printf("%s",nine);
    
    count = 1;
  }
  return 0;
}

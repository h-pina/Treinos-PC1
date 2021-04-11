#include <stdio.h>

void clearStr(char str[]){
  int i = 0;
  while(str[i] != '\0'){
    str[i] = 0;
    i++;
  }
}

void printStr(char str[]){
  int i = 0;
  if(str[i] == '\0'){
    printf("0");
  }else if(str[i] == '0'){
    while(str[i] == '0'){
      i++;
    }
    if(str[i] == '\0'){
      printf("0");
    }
  }

  while(str[i] != '\0'){ //imprime a string
    printf("%c", str[i]);
    i++;
  }
  printf("\n");
}


int main(){
  int test = 1;
  int len, i; 
  int newIndex = 0;
  char input[200], newStr[200];
  
  while(test){
    clearStr(newStr);
    newIndex = 0;

    fgets(input, 200, stdin);
    for(len = 0; input[len] != '\0'; len++){}
    if(len-2 == 2 && input[0] == '0' && input[2] == '0'){
      test--;//stop testing
    }
    
    if(test){
      for(i = 2;i<=len;i++){
        if(input[i] != input[0] && input[i] != '\n'){
          newStr[newIndex] = input[i];
          newIndex++;
        }
      }
      printStr(newStr);
    }
  }
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define size 105

void clearStr(char str[]){
  int i = 0;
  while(str[i] != '\0'){
    str[i] = 0;
    i++;
  }
  
}

int printStr(char str[]){
  int i = 0;
  
  if(str[i] == '0'){ //Trata os casso de quando o numerio inicia com 0
    while(str[i] == '0'){ //caso o numero contenha 0 a esquerda
      i++;
    }
    if(str[i] == '\0'){ // caso o numero contenha apenas 0
      printf("0");
    }
  }
  
  while(str[i] != '\0'){ //imprime a string
    printf("%c", str[i]);
    i++;
  }
  printf("\n");
  return 0;
}

int main(){
  char differntNum;
  char input[size];
  char newStr[size];
  int i, index, len, copied;
  int end = 0;
  while(end == 0){
    scanf("%c %s", &differntNum,input);
    getchar(); //coleta o newline
    index = 0;
    copied = 0;

    for(i=0;input[i] != '\0'; i++){
      if(input[i] != differntNum){
        newStr[index] = input[i];
        index++;
        copied++;
      }
    }
    if(copied == 0){
      if(differntNum == '0'){
        end = printStr(newStr);  
      }
      else{
        printStr(newStr);
      }
    }else{
      printStr(newStr);
    }
    clearStr(newStr);
    clearStr(input);
  }
  return 0;
}

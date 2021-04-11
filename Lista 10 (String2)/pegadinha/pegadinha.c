#include <stdio.h>

void clearStr(char str[]){
  int i;
  for(i = 0; str[i] != '\0'; i++){
    str[i] = 0;
  }
}

void printStr(char str[]){
  int i = 0;
  while(str[i] != '\n'){ 
    printf("%c", str[i]);
    i++;
  }
  printf("\n");
}

void mergeString(char line1[], char line2[], char complete[]){
  int len1, len2, len3;
  for(len1 = 0; line1[len1] != '\n'; len1++){} //conta apenas o numero de caracteres da string 
  for(len2 = 0; line1[len2] != '\n'; len2++){}  
  len3 = len1+len2; // define o tamanho total do nome final
  
  
  int index0 = 0; //indice do nome completo 
  int index1 = 0; //indice da primeira linha de entrada
  int index2 = 0; //indice da segunda linha de entrada
  int linefeed = 1; // define qual das duas linhas esta sendo lida no momento
  while(index0 <= len3){
    if(linefeed%2 == 0){
      complete[index0] = line2[index2];
      index2++;
    }else{
      complete[index0] = line1[index1];
      index1++;
    }
    index0++;
    if(index0%2 == 0){ // a cada dois caracteres lidos, linefeed alterna entre um numero par e impar
      linefeed++;
    }
  }
  index0++;
  complete[index0] = '\0'; //adiciona o \0 no final para imprimir a string
}

int main(){
  int testCases;
  char line1[105], line2[105], complete[220];
  scanf("%i", &testCases);
  getchar();

  while(testCases){
    clearStr(complete);
    fgets(line1, 105, stdin);
    fgets(line2, 105, stdin);
    mergeString(line1, line2, complete);
    printStr(complete);
    testCases--;
  }
  return 0; 
}


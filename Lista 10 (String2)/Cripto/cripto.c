#include <stdio.h>
#include <stdlib.h>

#define strlenght 1005
//Coloquei a maior parte dos comentarios em ingles (exceto as descricoes das
//funcoes) para treinar criar o habito de escrever esse tipo de documentacao
//na lingua ja que a maior comunidade se comunica por ela

void printstr(char str[]){
  int i = 0;
  while(str[i] != '\n'){
        printf("%c", str[i]);
      i++;
  } 
  printf("\n");
}

//preenche todos os valores da string anterior com 00, para receber uma nova
//string
void clearString(char str[]){
  int i=0;
  while(str[i] !='\0'){ //clear all filled positions on array
    str[i] = 0;
    i++;
  }
  i++;
  str[i] = 0; //make the '\0' charater equal 0;

}


//desloca as letras na tabela ASCII
void shiftLetters(char str[]){  
  int i = 0;
  while(str[i] != '\n'){
    if( (str[i] >= 'a' && str[i] <= 'z' ) || (str[i] >= 'A' && str[i] <= 'Z')){
      str[i]+=3;
    }
    i++;
  }
}

//inverte os caracteres da linha (o ultimo vai para o inicio)
void inverseLine(char str[]){
  char temp;
  int lenght,index;
  for(lenght = 0; str[lenght] != '\n';lenght++){} //get string lenght
  lenght--;
  for(index = 0; index <= (lenght/2); index++){
    temp = str[index];
    str[index] = str[lenght-index];
    str[lenght-index] = temp;
  }
}

//desloca todos os caracteres da metade em diante uma posicao para esquerda
void shiftHalf(char str[]){
  int lenght=0,index=0; 
  for(lenght = 0; str[lenght] != '\n';lenght++){} //get string lenght
  for(index = lenght/2; str[index] != '\n';index++){
    str[index]-=1;
  }
}

int main(){
  int testCases;
  char string[strlenght];
  scanf("%i", &testCases); 
  getchar(); // capture newline
  
  while(testCases){
    fgets(string,strlenght,stdin);
    shiftLetters(string); // first pass
    inverseLine(string); // second pass
    shiftHalf(string); // third pass
    printstr(string);
    clearString(string);
    testCases--;
  }


  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int testCases, index;
  int* inputs;

  //Collect Data from Input
  scanf("%i", &testCases);
  getchar(); //Removes newline from input buffer
  inputs = malloc(testCases* sizeof(int)); //Create an array with the size of testcases

  for(index = 0;index<testCases;index++){
    scanf("%i", &inputs[index]);
    getchar(); //collect newline;
  }

  //Count occurrencies;
  struct element{
    int value;
    int occur;
  };

  struct element *elements = malloc(testCases * sizeof(struct element)); //Create an array of structs
  
  int j;
  for(j = 0; j<testCases; j++){
    elements[j].value = 0;
    elements[j].occur = 0;
  }
  
  int exist = 0;
  for(index = 0; index<testCases; index++){
    
    for(j = 0; j < testCases; j++){
      if(elements[j].value == inputs[index]){
        elements[j].occur++;
        exist++;
      }
    }
    
    if(!exist){
      for(j = 0; j<testCases;j++){
        if(elements[j].value == 0){
          elements[j].value = inputs[index];
          elements[j].occur++;
          j = testCases;
        }
      }
    }
    exist = 0;
  }

  //libera o espaco da memoria dos inputs, ja que esta array nao sera mais
  //usada
  free(inputs);

  //ordena em ordem crescente
  int index2 = 0;
  int min = 1000000, minPos;
  struct element tmpaddr;
  
  while(index2 < testCases){ //identifica o menor valor
    for(j = index2; j<testCases; j++){
      if(elements[j].value < min){
          if(elements[j].value != 0){
            min = elements[j].value;
            minPos = j;
        }
      }
    }

    //copia o menor valor pra posicao inicial
    memcpy(&tmpaddr,&elements[index2], sizeof(struct element));
    memcpy(&elements[index2],&elements[minPos], sizeof(struct element));
    memcpy(&elements[minPos],&tmpaddr, sizeof(struct element));

    index2++;
    min = 100000;
  }
  
  //imprime os resultados
  for(j = 0; j<testCases;j++){
    if(elements[j].value != 0){
      printf("%i aparece %i vez(es)\n", elements[j].value, elements[j].occur);
    }
  }
  return 0;
}


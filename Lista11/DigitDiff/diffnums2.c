#include <stdio.h>
#include <stdlib.h>

int check(int value){
  int num[] = {0,0,0,0};
  int index = 0;
  int digits = 4;

  if(value >= 1000){
    num[index] = (value/1000);
    value -= (value/1000)*1000;
    index++;
  }

  if(value>=100){
    num[index] = (value/100);
    value -= (value/100)*100;
    index++;
  }else if(index > 0){
    num[index] = 0;
    index++;
  }

  if(value>=10){
    num[index] = (value/10);
    value -= (value/10)*10;
    index++;
  }else if(index > 0){
    num[index] = 0;
    index++;
  }

  if(value>=0){
    num[index] = value;
    index++;
  }else if(index > 0){
    num[index] = 0;
    index++;
  }
  
  
  int i,j;
  for(i = 0; i<index; i++){
    for(j=i+1;j<index;j++){
      if(num[i] == num[j]){
        return 0;
      }
    }
  }
  return 1;
}

int main (){ 
  int min, max;
  int value, count, result;
  while(scanf("%i %i", &min, &max) != EOF){ 
    getchar(); 
    value = min;
    count = 0;

    while(value <= max){
      result = check(value); //converte o numero inteiro para string
      if (result){ // caso nao hajam repeticoes, soma na contagem
        count++;
      }
      value++;
    }
    printf("%i\n", count);
  }
  return 0;
}

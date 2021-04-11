#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void clearStr(char str[]){
  int i;
  for(i = 0; i<20; i++){
    str[i] = 0;
  }
}

void convert(char str[], int value){
  int index = 0, mil = 0, cem = 0, dec = 0;
  if(value >= 1000){
    str[index] = (value/1000) + 48;
    value -= (value/1000)*1000;
    index++;
    mil++;
  }  
  if(value>=100){
    str[index] = (value/100)+ 48;
    value -= (value/100)*100;
    index++;
    cem++;
  }else if(mil){
    str[index] = 48;
    index++;
  }
  if(value>=10){
    str[index] = (value/10)+48;
    value -= (value/10)*10;
    index++;
    dec++;
  }else if (mil || cem){
    str[index] = 48;
    index++;
  }
   if(value>0){
    str[index] = value+48;
  }else if(dec || mil || cem){
    str[index] = 48;
  }
}

int checkReps(char str[]){
  int index, index1;
  for(index = 0; str[index] != 0; index++){
    for(index1 = index+1; str[index1] != 0; index1++){
      if(str[index1] == str[index]){
        return 0;
      }
    }
  }
  return 1;
}

int main (){ 
  int min, max;
  int value, count, result;
  char strValue[10];
  while(scanf("%i %i", &min, &max)){ 
    getchar(); 
    value = min;
    count = 0;

    clearStr(strValue); //preenche a string com 00
    while(value <= max){
      convert(strValue, value); //converte o numero inteiro para string
      result = checkReps(strValue); //checa se existem repeticoes no numero
      if (result){ // caso nao hajam repeticoes, soma na contagem
        count++;
      }
      value++;
    }
    printf("%i\n", count);
    clearStr(strValue); //preenche a string com 00
  }
  return 0;
}

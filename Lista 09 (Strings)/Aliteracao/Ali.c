#include <stdio.h>
#include <stdlib.h>


void clearString(char str[]){
  int i;
  for(i = 0; i<5201;i++){
    if(str[i] != '\0')
      str[i] = 0;
    else{
      str[i] = 0; 
      i = 5201;
    }
  }
}

int stringLen(char str[],int maxSize){
  int count, i;
  count = 0;
  for(i = 0; i<maxSize; i++){
    if(str[i] != '\0')
      count++;
    else
      i = maxSize;
   }
   return count+1;
}

void lowerCaseAll(char str[], int lenght){
  int i;
  for(i = 0;i<lenght;i++){
    if(str[i] >= 65 && str[i] <= 90){
      str[i] += 32;
    }
  }
}

void countAliteraion(char phrase[], int lenght){
  int i, aliterationOn = 0;
  int aliterationCount = 0;
  char firstLetter;
  firstLetter = phrase[0];
  
  for(i=0;i<lenght;i++){
    if(phrase[i] == ' '){
      if(phrase[i+1] == firstLetter){
        if(aliterationOn == 0){
          aliterationCount++;
          aliterationOn = 1;
        }
        else{}
      }
      
      else{
        aliterationOn = 0;
        firstLetter = phrase[i+1];
      }

    }
  }

  printf("%i\n", aliterationCount);
}
  

int main(){
  int phraseLen;
  char phrase[5201];
  
  while(fgets(phrase, 5201, stdin)){
  
  phraseLen = stringLen(phrase, 5201); // get lenght of string
  lowerCaseAll(phrase, phraseLen); // lowercase all characters
  
  countAliteraion(phrase, phraseLen);
  
  clearString(phrase);
  }
  return 0;
}

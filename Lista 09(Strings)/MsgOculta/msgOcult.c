#include <stdio.h>

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

void printString(char str[]){
  int i = 0;
  while(str[i] != '\0'){
    printf("%c", str[i]);
    i++;
  }
  printf("\n");
}


void findHiddenMessage(char str[], int strLen){
  int i;
  int hiddenindex = 0;
  char hidden[28];
  
  
  if(str[0] != ' '){
    hidden[hiddenindex] = str [0];
    hiddenindex++;
  }
  for(i = 1; i<strLen; i++){
    if(str[i] != ' '){
      if(str[i-1] == ' '){
        hidden[hiddenindex] = str[i];
        hiddenindex++;
      }
    }
  }
  if (hidden[hiddenindex - 1] == '\n')
    hidden[hiddenindex-1] = '\0';
  else
    hidden[hiddenindex] = '\0';
  printString(hidden);
}


int main(){
  
  char phrase[52], getNewline;
  int cases, phraseLen;
  scanf("%i", &cases);
  scanf("%c", &getNewline);

  while (cases){
    fgets(phrase, 52, stdin);
    phraseLen = stringLen(phrase, 52);
    findHiddenMessage(phrase, phraseLen);
    clearString(phrase);
    cases--;
  }
  return 0;
}

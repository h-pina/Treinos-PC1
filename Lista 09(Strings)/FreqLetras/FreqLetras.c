#include <stdio.h>
#define arraySize 205

int stringLen(char str[],int maxSize){
  int count, i;
  count = 0;
  for(i = 0; i<maxSize; i++){
    if(str[i] != '\0')
      count++;
    else
      i = maxSize;
   }   
   return count;
}

void lowerCaseAll(char str[], int lenght){
  int i;
  for(i = 0;i<lenght;i++){
    if(str[i] >= 65 && str[i] <= 90){
      str[i] += 32; 
    }   
  }
}

void letterOccurencies(char str[], int strLen){
  char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  int occurr[26]; // registers the occurrency of each letter of the alphabet
  
  int i; //i variable will be used multiple times to do for loops
  
  for(i = 0; i<26; i++){
    occurr[i] = 0;
  }

  int i_;
  //Navegar por toda a string e contar a ocorrencia de cada uma das letras
  for (i=0;i<strLen;i++){
    for(i_ = 0;i_<26;i_++){
      if(str[i] == alphabet[i_]){
        occurr[i_] = occurr[i_] + 1;
      }
    }
  }

  int largestCount = 0;
  //verificar qual o maior numero dentre as ocorrencias
  for (i=0;i<26;i++){
    if(occurr[i] > largestCount){
      largestCount = occurr[i];
    }
  }

  //verificar todas as letras com o numero de ocorrencias igual a largestCount
  for(i=0;i<26;i++){
    if(occurr[i] == largestCount){
      printf("%c",alphabet[i]); 
    }
  }
  printf("\n");
}


int main(){

  int testCases, phraseLen;
  char line[arraySize];
  scanf("%i ", &testCases);
  while(testCases){
    fgets(line, arraySize, stdin);
    phraseLen = stringLen(line, arraySize);
    line[phraseLen] = '\0';
    lowerCaseAll(line, phraseLen);
    letterOccurencies(line, phraseLen);  
    
    testCases--; 
  }
  return 0;
}

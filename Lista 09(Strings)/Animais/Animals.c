#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define size 20

int stringLen(char str[]){
  int count = 0;
  int i = 0;
  while(str[i]>=97 && str[i]<=122){
    count++;
    i++;
  }
  return count;
}


int strCompare(char str1[], char str2[],int str1Len, int str2Len){
  int i;

  if(str1Len == str2Len){
    for(i = 0; i<str1Len-1; i++){
      if(str1[i]!=str2[i]){
        return 0;
      }
    }
    return 1;
  }
  else{
    return 0;
  }
}

void printStr(char str[]){
  int i = 0;
  while(str[i] <= 122 && str[i] >= 97){
    printf("%c", str[i]);
    i++;
  }
  printf("\n");
}


int main(){
  char aguia[4][size] = {"vertebrado", "ave","carnivoro","aguia"};
  char pomba[4][size] = {"vertebrado", "ave","onivoro","pomba"};
  char homem[4][size] = {"vertebrado", "mamifero","onivoro","homem"};
  char vaca[4][size] = {"vertebrado", "mamifero","herbivoro","vaca"};
  char pulga[4][size] = {"invertebrado", "inseto","hematofago","pulga"};
  char sanguessuga[4][size] = {"invertebrado","anelideo","hematofago","sanguessuga"};
  char minhoca[4][size] = {"invertebrado","anelideo","onivoro","minhoca"};
  char lagarta[4][size] = {"invertebrado", "inseto","herbivoro","lagarta"};
  
  char* animals[] = {*aguia, *pomba, *homem, *vaca, *pulga, *lagarta, *sanguessuga, *minhoca};
  char input[3][size];

  int entry = 0;
  int len;
  while(entry != 3){
    fgets(input[entry], 45, stdin);
    len = stringLen(input[entry]);
    input[entry][len] = '\0';
    entry++;
  }

  int index1, index2,count = 0;
  int str1Len, str2Len;
  char* result;
  for(index1 = 0; index1<8;index1++){
    for(index2 = 0; index2<3; index2++){
      str1Len = stringLen(input[index2]);
      str2Len = stringLen(animals[index1]+size*index2);
      if(strCompare(input[index2],animals[index1]+size*index2, str1Len, str2Len)){
        count++;
        if(count == 3){
          result = animals[index1] + 60;
          printStr(result);
          index1 = 8;
        }
      }
      else{
        count = 0;
        index2 = 3;
      }
    }
  }
  return 0;

}


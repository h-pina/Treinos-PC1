#include <stdio.h>
#define strSize 1005

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

void stringCopy(char src[],char dest[],int totalLen, int offset){
  int i;
  for(i=0; i<=offset;i++){
    dest[i] = src[totalLen-offset+i];
  }
}

void stringCompare(char str1[],char str2[],int len){
  int i, equal;
  equal = 0;
  for(i = 0; i<len;i++){
    if(str1[i] == str2[i]){}
    else{equal++;}
  }
  if(equal > 0){printf("nao encaixa\n");}
  else{printf("encaixa\n");}
}




int main(){

  char firstString[strSize], scndString[strSize], firstCut[strSize];
  int testNum, iLen, fLen;
  char getNewline;

  scanf("%i", &testNum);
  while(testNum){  
    scanf("%s %s", firstString, scndString);
    scanf("%c", &getNewline);

    iLen = stringLen(firstString, strSize);
    fLen = stringLen(scndString, strSize);
    
    stringCopy(firstString, firstCut, iLen, fLen);

    stringCompare(firstCut, scndString, fLen);
    testNum--;
  }

  return 0;
}

#include <stdio.h>


int strCmp(char str1[], char str2[]){
 int len1 = 0, len2 = 0;
 int i = 0;
 for(len1 = 0; str1[len1]!='\0';len1++){}
 for(len2 = 0; str2[len2]!='\0';len2++){}
 if(len1 == len2){
   while(i < len1){
    if(str1[i] == str2[i]){
      i++;
    }else{
      return 0;
    }
   }
   return 1;
 }else{
   return 0;
 }
}

void strTransfer(char str1[],char str2[]){
  int i = 0;
  while(str1[i] != '\0'){
    str2[i] = str1[i];
    i++;
  }
  str2[i+1] = str1[i+1]; 
}

void printStr(char str[]){
  int i = 0;
  while(str[i] != '\n'){
    printf("%c", str[i]);
    i++;
  }
  printf("\n");
}

void clearStr(char str[]){
  int i;
  for(i = 0; str[i] != '\0'; i++){
    str[i] = 0;
  }
  str[i+1] = 0;
}



int main(){

  int testCases, inputNumber, i, result;
  char language1[30], language2[30];
  result = 0;
  scanf("%i", &testCases);
  getchar();
  //printf("testcasesColect\n");
  
  while(testCases){
    scanf("%i", &inputNumber);
    getchar();
    //printf("inputcollect\n");

    for(i=0;i<inputNumber;i++){
      if(i == 0){
        fgets(language1, 30, stdin);
        //printf("firstCollect\n");
      }else{
        fgets(language2, 30, stdin);
        //printf("newCollect\n");
        if (strCmp(language1, language2)){
          strTransfer(language2, language1);
          //printf("transfer\n");
        }
        else{
          //printf("Wrong\n");
          result = 1;
        }
      }
    }

    if(result == 0){printStr(language2);}
    else{printf("ingles\n");}
    
    clearStr(language2);
    clearStr(language1);
    result = 0;
    
    testCases--;
    //printf("minustestcases\n");
  }
  return 0;
}


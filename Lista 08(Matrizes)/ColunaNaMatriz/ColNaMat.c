#include <stdio.h>
#define size 3

void fillArray(float M[size][size],int lineMax, int colMax){
  int lines, collums;
  float value;
  
  for(lines = 0; lines < lineMax; lines++){
    for(collums = 0; collums < colMax; collums++){
      scanf("%f", &value);
      M[lines][collums] = value;
    }
  }
}

float colOp(float M[size][size], int lineMax, int colOp, char opType){
  float result = 0;
  int index;
  for(index = 0; index<lineMax;index++){
    if(opType == 'S' || opType == 'M')  
      result += M[index][colOp];
  }
  if(opType == 'M')
    result = result/lineMax;

  return result;
}



int main(){

  int colOperation;
  char opType;
  
  float M[size][size],result;

  scanf("%i", &colOperation);
  scanf(" %c", &opType);
  
  fillArray(M,size,size);
  result = colOp(M,size,colOperation,opType);

  printf("%.1f\n", result);

  return 0;
}

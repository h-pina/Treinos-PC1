#include <stdio.h>
#include <stdlib.h>

//Converte os numeros do cpf para inteiros, e os armazenam em outra array,
//ignorando os caracteres '.' e '-'
void convertToInt(char source[], int dest[]){ 
  int indexSource;
  int indexDest = 0;
  for(indexSource = 0;indexSource<14;indexSource++){
    if(source[indexSource] >= 48 && source[indexSource] <= 57){
      dest[indexDest] = source[indexSource]-48;
      indexDest++;
    }
  }
}

//Checa os dois digitos finais
int checkCpf(int cpfdigits[]){
  int digit, index;
  int sum, resto;
  int validnumbers = 0;

  //O primeiro loop define qual digito esta sendo analisado. A variavel digito
  //é usada para a logica de 'chaveamento' nos ifs subsequentes
  for(digit = 0; digit < 2; digit++){ 
    sum = 0;
    for(index = 0; index < 9; index++){
      
      if(!digit){ // soma do primeiro digito
        sum += cpfdigits[index]*(index+1);
      }
      else{ // soma do segundo digito
        sum += cpfdigits[8-index]*(index+1);
      }
    }
    
    if(sum%11 == 10){resto = 0;} // a logica de resto e valida para os dois digitos
    else{resto = sum%11;}
    
    if(!digit){ //verificacao do primeiro digito
      if(resto == cpfdigits[9]){validnumbers++;}
    }else{ //verificacao do segundo digito
      if(resto == cpfdigits[10]){validnumbers++;}
    }
  }
  if(validnumbers == 2){return 1;} //retornos da funcao
  else{return 0;}
}


int main(){
  char cpfinput[17];
  int cpfdigits[17];
  int result = 0;
  while(fgets(cpfinput, 17, stdin)){
    convertToInt(cpfinput, cpfdigits);
    result = checkCpf(cpfdigits);
    if(result){printf("CPF valido\n");}
    else{printf("CPF invalido\n");}

  }
  return 0;
}

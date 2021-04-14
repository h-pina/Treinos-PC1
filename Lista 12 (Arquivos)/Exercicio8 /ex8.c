//--------------------------------------------------------------------
//Descricao: Resolucao do exercicio numero 8 da Lista 12, sobre Arquivos
//Disciplina: Programacao de Computadores 1
//Dupla: Andre Guilherme de Almeida Macedo e Hugo Antunes Pina
//---------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Essa funcao torna todos os caracteres da palavra minusculos
void lowercaseAll(char str[],size_t numchar){
    int i;
    for(i=0;i<numchar;i++){
        if(str[i] >= 64 && str[i] <= 90){
            str[i]+=32;
        }
    }
}


int main(){
    FILE *text;
    char input[80],comparison[80];
    int cont;

    //abrir arquivo
    text = fopen("texto.txt","r");

    //capturar a palavra a ser contabilizada no texto
    printf("Digite qual palavra deseja contabilizar: ");
    fgets(input, 80, stdin);

    //conta o numero de caracteres da palavra;
    int charCount;
    for(charCount = 0; input[charCount] != '\n';charCount++){}
    
    lowercaseAll(input, charCount); //deixa todos os caracteres em letra minuscula
  
    int result,sizecomp;
    cont = 0;
    while(fscanf(text, "%s", comparison)!= EOF){ //le uma palavra por loop e armazena na string comparison
        sizecomp = strlen(comparison); //mede o numero de caracteres em compaarison
        lowercaseAll(comparison,sizecomp); //faz com que comparison tambem esteja em letras minusculas
        result = memcmp(input, comparison, charCount); //compara as strings input e comparison
        if(result == 0){ //se ambas forem iguais, soma 1 ao contador
            cont++;
        }
    }

    printf("Numero de Ocorrencias: %i\n", cont);

    fclose(text);

    return 0;
}
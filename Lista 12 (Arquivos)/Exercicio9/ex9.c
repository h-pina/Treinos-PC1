//--------------------------------------------------------------------
//Descricao: Resolucao do exercicio numero 9 da Lista 12, sobre Arquivos
//Disciplina: Programacao de Computadores 1
//Dupla: Andre Guilherme de Almeida Macedo e Hugo Antunes Pina
//---------------------------------------------------------------------

//---------------------------------------------------------------------------------------
//Observacao: Esse codigo interpreta palavras compostas como duas palavras distintas
//que possuem uma pontuacao entre si, assim, primeiro-ministro por exemplo e interpretado
//como as palavras primeiro e ministro
//----------------------------------------------------------------------------------------

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

//Essa funcao checa se existem caracteres de pontuacao contidos na string
//e os imprime
void checkPunctuation(char str[], size_t numchar, FILE *dest){
    int i;
    for(i = 0; i<numchar; i++){
        if(str[i] >= 33 && str[i] <= 47){
            fwrite(&str[i], sizeof(char), 1, dest);
        }
    }
}


int main(){
    FILE *source, *dest;
    char input[80],comparison[80],comparisonOriginal[80];

    //abrir arquivo e criar arquivo auxiliar
    source = fopen("arquivo.txt","r");
    dest = fopen("aux.txt", "w");

    //capturar a palavra a ser removida
    printf("Digite qual palavra deseja remover: ");
    fgets(input, 80, stdin);

    //conta o numero de caracteres da palavra
    int charCount;
    for(charCount = 0; input[charCount] != '\n';charCount++){}
    lowercaseAll(input, charCount);

    int result,sizecomp;
    char nextChar;
    while(fscanf(source, "%s", comparison)!= EOF){ //le uma palavra por loop
    
        strcpy(comparisonOriginal, comparison); //copia a palavra para uma segunda string auxiliar
        
        sizecomp = strlen(comparison); // calcula tamanho da palavra
        lowercaseAll(comparison,sizecomp); //deixa os caracteres minusculos
        result = memcmp(input, comparison, charCount); // verifica se trata-se da palavra desejada
        
        if(result != 0){ // caso nao seja
            fwrite(comparisonOriginal, sizeof(char), sizecomp, dest); //copie a palavra para o novo arquivo
        }else if(result == 0){ //caso seja, verifique se existe pontuacao na string capturada
            checkPunctuation(comparisonOriginal,sizecomp, dest);
        }

        fscanf(source, "%c", &nextChar); // coloca o proximo caracter na string, seja ele um espaço ou um '\n', por exemplo
        fputc(nextChar,dest);
    }
    
    fclose(source);
    fclose(dest);

    system("rm arquivo.txt"); //para o linux
    system("mv aux.txt arquivo.txt");

    return 0;
}
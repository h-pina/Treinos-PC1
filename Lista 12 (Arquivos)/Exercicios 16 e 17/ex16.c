/*--------------------------------------------------------------------
Descricao: Resolucao do exercicio numero 16 da Lista 12, sobre Arquivos
Disciplina: Programacao de Computadores 1
Dupla: Hugo Antunes Pina e Andre Guilherme de Almeida Macedo
---------------------------------------------------------------------*/

#include <stdio.h>
int main(){
    FILE *bin;
    int index1;
    
    //Criacao da Matriz. nessa matriz foram adicionadas a linha 0 e coluna 0, de modo que o acesso seja direto 
    //(isto e, para acessar a distancia entra as cidades 1 e 2, sera acessado o elemento [1][2], ao inves de [0][1])
    int distCidades[6][6] = {
        {0, 0,  0,  0,  0,  0},  //Linha 0
        {0, 0,  15, 30, 5,  12}, //Linha 1
        {0, 15, 0,  10, 17, 28}, //Linha 2
        {0, 30, 10, 0,  3,  11}, //Linha 3
        {0, 5,  17, 3,  0,  80}, //Linha 4
        {0, 12, 28, 11, 80, 0},  //Linha 5
    };
    
    //Criacao do Arquivo binario para posterior gravacao da array
    bin = fopen("distCidades.bin","wb");
    
    //Captura de erros para possiveis problemas na execucao ou logica do codigo
    if(bin == NULL){
        printf("Não foi possivel abrir o arquivo");
        return 1;
    }

    //Gravacao da array no arquivo criado ('distCidades.bin'). A gravacao e feita linha por linha
    for(index1 = 0;index1<6;index1++){
        if(fwrite(&distCidades[index1][0],sizeof(int),6,bin) == 0){
            printf("Erro na gravacao!");
        }
    }

    fclose(bin);
    return 0;
}
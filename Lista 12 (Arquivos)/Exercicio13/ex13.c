//--------------------------------------------------------------------
//Descricao: Resolucao do exercicio numero 13 da Lista 12, sobre Arquivos
//Disciplina: Programacao de Computadores 1
//Dupla: Andre Guilherme de Almeida Macedo e Hugo Antunes Pina
//---------------------------------------------------------------------
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    printf("Tamanho de uma variavel int: %li bytes\n", sizeof(int));
    printf("Tamanho de uma variavel char: %li byte \n\n", sizeof(char));

    FILE *texto = fopen("texto.txt", "w"), *binario = fopen("binario.bin", "wb"); //abrindo os arquivos
    int v[100], i; //array v para abrigar os valores e i para indexar loops de for

    fseek(texto,0,SEEK_SET); //Coloca os apontamentos no inicio dos arquivos
    fseek(binario,0,SEEK_SET);
    printf("Experimento 1: Preenchendo vetor com 100 inteiros entre 0 e 9\n");
    for (i = 0; i < 100; i++){ //preenche a array com os digitos especificados
        v[i] = rand() % 10;
    }
    for(i=0;i<100;i++){ //escreve os valores em ambos os arquivos
        fprintf(texto,"%d",v[i]);
        fwrite(&v[i], sizeof(int), 1, binario);
    }
    printf("Tamanho do arquivo texto: %ld bytes\n", ftell(texto));
    printf("Tamanho do arquivo binario: %ld bytes\n\n", ftell(binario));
    //RESULTADO: Cada inteiro escrito no arquivo binário tem um tamanho fixo de 4 bytes, assim 4*100 = 400 bytes ocupados.
    //Para escrever os numeros no arquivo texto, cada digito de um numero ocupa o espaco de um char. Assim, para esse caso
    //o espaco ocupado e de 100*1 = 100 bytes


    fseek(texto,0,SEEK_SET); //Coloca os apontamentos no inicio dos arquivos
    fseek(binario,0,SEEK_SET);
    printf("Experimento 2: Preenchendo vetor com 100 inteiros entre 1000 e 9999\n");
    for (i = 0; i < 100; i++){ //preenche a array com os digitos especificados
        v[i] = rand() % 9000 + 1000;
    }
    for(i=0;i<100;i++){ //escreve os valores em ambos os arquivos
        fprintf(texto,"%d",v[i]);
        fwrite(&v[i], sizeof(int), 1, binario);
    }
    printf("Tamanho do arquivo texto: %ld bytes\n", ftell(texto));
    printf("Tamanho do arquivo binario: %ld bytes\n\n", ftell(binario));
    //RESULTADO: Cada inteiro escrito no arquivo binário tem um tamanho fixo de 4 bytes, assim 4*100 = 400 bytes ocupados.
    //Para escrever os numeros no arquivo texto, cada digito de um numero ocupa o espaco de um char. Assim, para esse caso
    //o espaco ocupado e de 100*4 = 400 bytes


    fseek(texto,0,SEEK_SET); //Coloca os apontamentos no inicio dos arquivos
    fseek(binario,0,SEEK_SET);
    printf("Experimento 3: Preenchendo vetor com 100 inteiros entre 10000 e 99999\n");
    for (i = 0; i < 100; i++) //preenche a array com os digitos especificados
        v[i] = rand() % 90000 + 10000;
    
    for(i=0;i<100;i++){ //escreve os valores em ambos os arquivos
        fprintf(texto,"%d",v[i]);
        fwrite(&v[i], sizeof(int), 1, binario);
    }
    printf("Tamanho do arquivo texto: %ld\n", ftell(texto));
    printf("Tamanho do arquivo binario: %ld\n\n", ftell(binario));
    //RESULTADO: Cada inteiro escrito no arquivo binário tem um tamanho fixo de 4 bytes, assim 4*100 = 400 bytes ocupados.
    //Para escrever os numeros no arquivo texto, cada digito de um numero ocupa o espaco de um char. Assim, para esse caso
    //o espaco ocupado e de 100*5 = 500 bytes

    return 0;
}

/*---------------------------------------------------------------------
Descricao: Resolucao do exercicio numero 17 da Lista 12, sobre Arquivos
Disciplina: Programacao de Computadores 1
Dupla: Andre Guilherme de Almeida Macedo e Hugo Antunes Pina
---------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

//calcula a distancia total do percurso do viajante
int calcTotalDist(int cidadesAtravessadas[], int numCidades){
    int distTotal = 0;
    
    //Carrega Matriz contendo as distancias entre cidades do arquivo 'distCidades.bin'
    FILE *bin;
    bin = fopen("distCidades.bin","rb");
    int distCidades[6][6]; //cria array local para preenchimento com os valores
    int index1;
    for(index1 = 0;index1<6;index1++){ //preenchendo array local com as distancias
        fread(&distCidades[index1][0],sizeof(int),6,bin);
    }
    fclose(bin); //nao e mais necessario ler do arquivo

    //soma as distancias percorridas
    int localIndex;
        //Nesse Loop, localIndex so vai ate (numCidades -1) pois a cada iteracao sao acessados pares de cidades. 
        //Assim, a ultima iteracao do loop  deve acessar a ultima e penultima cidade
    for(localIndex = 0; localIndex< (numCidades-1);localIndex++){ 
        distTotal += distCidades[cidadesAtravessadas[localIndex]][cidadesAtravessadas[localIndex+1]];
    }

    return distTotal;
}

int main(){

    int distTotal;
    int numCidades,index;
    int *cidadesAtravessadas;
    
    printf("Insira o numero de cidades atravessadas durante a viagem: ");
    scanf("%i", &numCidades);
    cidadesAtravessadas = malloc(numCidades*sizeof(int)); //Aloca espaco na memoria de acordo com o numero de cidades atravessadas
    
    printf("Insira as cidades atravessadas (separadas por espacos): ");
    for(index = 0;index < numCidades;index++){
        scanf("%i",&cidadesAtravessadas[index]);
    }

    distTotal = calcTotalDist(cidadesAtravessadas, numCidades);

    printf("Distancia Total Percorrida: %i km\n", distTotal);
    free(cidadesAtravessadas); //libera o espaco anteriormente alocado na memoria.

    return 0;
}
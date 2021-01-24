#include <stdio.h>

int main(){
    float n1, n2, n3, n4, media1, notaexame, media2;
    int situacao;
    scanf("%f %f %f %F", &n1,&n2,&n3,&n4);
    media1 = (n1*2 + n2*3 + n3*4 + n4*1) / (2+3+4+1); //calculo da media inicial das notas 
    if(media1 >= 7.0){
        situacao = 1;
    }else if(media1 < 5.0){
        situacao = 2;
    }else {
        situacao = 3;
        scanf("%f", &notaexame);
        media2 = (media1+notaexame)/2;
    }
    
    printf("Media: %.1f\n", media1);
    switch (situacao){
        case 1:
            printf("Aluno aprovado\n");
            break;
        case 2:
            printf("Aluno reprovado\n");
            break;
        case 3:
            printf("Aluno em exame\n");
            printf("Nota do exame: %.1f\n", notaexame);
            if(media2 >= 5.0){printf("Aluno aprovado\n");}
            else if(media2 < 5.0){printf("Aluno reprovado\n");}
            printf("Media final: %.1f\n", media2);
            break;
    }
    return 0;
}

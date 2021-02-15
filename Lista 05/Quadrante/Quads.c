#include <stdio.h>
#include <stdlib.h>


int main (){
    int x,y;
    scanf("%i %i", &x, &y);
    while (x!=0 && y!=0){
        if(x> 0){
            if(y>0){printf("primeiro\n");}
            else{printf("quarto\n");}
        }else{     
            if(y>0){printf("segundo\n");}
            else{printf("terceiro\n");}
        }
    scanf("%i %i", &x, &y);
    }
    return 0;
}



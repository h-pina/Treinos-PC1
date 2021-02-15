#include <stdio.h>

int main (){
    int x, y, sum;
    scanf("%i %i", &x, &y);
    sum = 0;
    if(x>=y){
        while(x>=y){
            if(x%13 != 0){sum+=x;}
            x--;
        }

    }else if(y>x){
        while(y>=x){
            if(y%13 != 0){sum+=y;}
            y--;
        }
    }

    printf("%i\n", sum);
    return 0;
}

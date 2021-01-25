#include <stdio.h>

int main(){
    int x, y;
    scanf("%i %i", &x, &y);
    if(x<0 || x>432){
        printf("fora\n");
    }else if(y<0 || y> 468){
        printf("fora\n");
    }else{
        printf("dentro\n");
    }

    return 0;
}

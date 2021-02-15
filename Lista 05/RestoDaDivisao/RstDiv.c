#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, bigger, smaller;
    scanf("%i\n%i", &x,&y);
    if(x>y){
        bigger = x;
        smaller = y;
    }else if (x<y){
        bigger = y;
        smaller = x;
    }

    smaller+=1;
    while(bigger > smaller){
        if(smaller%5 == 2 || smaller%5 == 3){
            printf("%i\n", smaller);
        }
        smaller++;
    }   
    return 0;
}

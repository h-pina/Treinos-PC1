#include <stdio.h>
#include <math.h>

int main(){
    int N, index, powr;
    scanf("%i", &N);
    for(index = 1; index <= N; index++){
        if(index%2 == 0){
            powr = (int)(pow((double)index, 2));
            printf("%i^2 = %i\n", index, powr );
        }
    }

    return 0;
}

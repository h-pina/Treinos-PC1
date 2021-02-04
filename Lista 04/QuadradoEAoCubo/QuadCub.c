#include <stdio.h>
#include <math.h>

int main(){
    
    int N, i, pwr2, pwr3;
    scanf("%i", &N);
    for(i = 1;i <= N; i++){
        pwr2 = (int)(pow((double)i,2));
        pwr3 = (int)(pow((double)i,3));
        printf("%i %i %i\n", i, pwr2, pwr3);
    }
    return 0;
}

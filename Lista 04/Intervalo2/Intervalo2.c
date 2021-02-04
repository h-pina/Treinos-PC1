#include <stdio.h>


int main(){
    int N, index, tmp, in, out;
    scanf("%i", &N);
    in = 0;
    out = 0;
    for(index = 0; index < N; index++){
        scanf("%i", &tmp);
        if (tmp >= 10 && tmp <= 20){in++;}
        else{ out++;}
    }
    printf ("%i in\n", in);
    printf ("%i out\n", out);

    return 0;
}

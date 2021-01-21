#include <stdio.h>

int main(){
    int N, hour, min, sec;
    scanf("%i", &N);
    hour = N/3600;
    N -= hour*3600;
    min = N/60;
    N -= min*60;
    sec = N;
    printf("%i:%i:%i\n", hour, min, sec);
    return 0;
}

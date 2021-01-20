#include <stdio.h>
 
int main() {          
    int A, B, C, D, diff;
    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);
    scanf("%i", &D);
    diff = (A*B - C*D);
    printf("DIFERENCA = %i\n", diff);

    return 0;
}

#include <stdio.h>

int main(){
    int m,n,sum,i;
    sum = 0;
    scanf("%i %i", &m, &n);
    while( m > 0 && n > 0){
        if(m>=n){
            for(i = n; i<=m;i++){
                printf("%i ", i);
                sum+=i;
            }
        }else{
            for(i = m; i<=n;i++){
                printf("%i ", i);
                sum+=i;
            }
        }

        printf("Sum=%i\n", sum);
        sum = 0;
        scanf("%i %i", &m, &n);
    }
    return 0;
}

#include <stdio.h>

int main() {
    int count, x,index, flag;
    scanf("%i", &count);
    while (count != 0){
        scanf("%i", &x);
        flag = 0;
        if(x == 2 || x == 3 ){printf("%i eh primo\n", x);}
        else{
            for(index = 2; index < x; index++){
                if(x%index == 0){
                    flag = 1;
                }
            }
            if(flag == 1){printf("%i nao eh primo\n", x);}
            else{printf("%i eh primo\n", x);}
        }
        count--;
    }
    return 0;
}

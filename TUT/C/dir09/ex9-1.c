#include <stdio.h>

int main(void){
    int i,j,number;
    for(i=0; i<16;i++){
        for(j=32; j<=96; j+=16){
            number = i+j;
            printf("%5d %c", number,number);
        }
        printf("\n");
    }
    return 0;
}

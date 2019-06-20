#include <stdio.h>

int main(int args, char *argv[]){
    int l=97,c,f=1; 
    while((c = getchar()) != EOF){
        if(f){
            if(c>=l)
                putchar(c-32);
            else
                putchar(c+32);

            f=0;
        }
        else
            putchar(c);
        if(c=='\n')
            f=1;
    }

    return 0;
}
    

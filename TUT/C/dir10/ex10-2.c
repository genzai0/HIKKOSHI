#include <stdio.h>
#include <string.h>

int type(char c);

int main(){
    char str[10000];
    scanf("%s", str);
    for(int i=0;i < strlen(str); i++){
        if(type(str[i])==1)
            printf("%c: Capital\n",str[i]);
        else if(type(str[i])==0)
            printf("%c: Small\n", str[i]);
        else if(type(str[i])==2)
            printf("%c: Numeral\n", str[i]);
        else
            printf("%c: Symbol\n", str[i]);
    }
}

int type(char c){
    if('a' <= c && c <= 'z')
        return 0;
    else if('A' <= c && c <= 'Z')
        return 1;
    else if('0' <= c && c <= '9')
        return 2;
    else
        return 3;
}



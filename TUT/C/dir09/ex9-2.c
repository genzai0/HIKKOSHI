#include <stdio.h>

int main(){
    char str[] = "Hello";
    char *p = str;
    // printf("%s\n",str);
    for(;;p++){
        if(*p=='\0')
            break;
    }
    for(;;p--){
        printf("%c",*p);
        if(str==p){
            printf("%c\n",'\0');
            break;
        }
    }
    return 0;
}

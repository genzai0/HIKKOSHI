#include <stdio.h>

int sum(int N);
int f(int x);
double ave(int a,int b,int c);
int sumB(int a,int b,int c);
int max(int a,int b,int c);
int min(int a,int b,int c);

int main(void){
    int a=1,b,c;
    int *pa=&a,*pb=&b,*pc=&c;
    printf("%d",a);
    printf("%f\n", ave(5,6,3));
}

int sum(int N){
    int s = 0;
    for(int i=1;i<=N;i++)
        s += i;
    return s;
}

int f(int x){
    return x*x+5*x+3;
}

int calc(int a,int b,int c){
    int tmp=0;
    if(c>b)
        return calc(a,c,b);
    else if(b>a)
        return calc(b,a,c);
}
double ave(int a,int b,int c){
    return (double)sumB(a,b,c)/3.0;
}

int sumB(int a,int b,int c){
    return a+b+c;
}

int max(int a,int b,int c){
    if(c>b)
        return max(a,c,b);
    else if(b>a)
        return max(b,a,c);
    else
        return a;
}

int min(int a,int b,int c){
    if(c>b)
        return min(a,c,b);
    else if(b>a)
        return min(b,a,c);
    else
        return c;
}

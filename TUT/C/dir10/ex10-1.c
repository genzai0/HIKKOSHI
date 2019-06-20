#include <stdio.h>

double input_rate(void);
int en_to_doller(int en, double rate);
int doller_to_en(int doller, double rate);
void display(int mode, int raw, int calced);

int main(){
    double rate;
    int mode,raw_money,calced_money;
    printf(" en par doller rate plz: ");
    rate = input_rate();
    while(1){
        printf("select exchange mode\n 1:en to doller\n 2:doller to en\n mode: ");
        scanf("%d",&mode);
        if(mode!=1 || mode!=2)
            break;
    }
    if(mode==1){
        printf("How much money?(en): ");
        scanf("%d",&raw_money);
        calced_money = en_to_doller(raw_money,rate);
    }else{
        printf("How much money?(doller): ");
        scanf("%d",&raw_money);
        calced_money = doller_to_en(raw_money,rate);
    }
    display(mode, raw_money, calced_money);
}

double input_rate(){
    double i;
    scanf("%lf",&i);
    return i;
}

int en_to_doller(int en, double rate){
    return (int)(en*100/rate);
}

int doller_to_en(int doller, double rate){
    return (int)(doller*rate);
}

void display(int mode, int raw, int calced){
    if(mode==1)
        printf("%d en is %d doller %d cent\n",raw, calced/100, calced%100);
    else if(mode==2)
        printf("%d doller is %d en\n",raw, calced);
    else
        printf("plz input 1 or 2\n");
}

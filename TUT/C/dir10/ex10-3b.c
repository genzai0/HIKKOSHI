#include <stdio.h>

double pl_calc(double *a, double *b);
double mi_calc(double *a, double *b);
double ti_calc(double *a, double *b);
double di_calc(double *a, double *b);

int main(){
    double a,b;
    printf("a:");
    scanf("%lf", &a);
    printf("b:");
    scanf("%lf", &b);

    printf("%lf\n", pl_calc(&a,&b));
    printf("%lf\n", mi_calc(&a,&b));
    printf("%lf\n", ti_calc(&a,&b));
    printf("%lf\n", di_calc(&a,&b));

    return 0;
}
double pl_calc(double *a, double *b){
    return (*a)+(*b);
}

double mi_calc(double *a, double *b){
    return (*a)-(*b);
}

double ti_calc(double *a, double *b){
    return (*a)*(*b);
}

double di_calc(double *a, double *b){
    return (*a)/(*b);
}

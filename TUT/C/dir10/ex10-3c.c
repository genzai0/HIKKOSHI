#include <stdio.h>

void calc(double a, double b, double *result_ptr);

int main(){
    double a,b;
    double result_ptr[4];
    printf("a:");
    scanf("%lf", &a);
    printf("b:");
    scanf("%lf", &b);

    calc(a,b,result_ptr);
    for(int i=0;i<4;i++){
        printf("%lf\n", result_ptr[i]);
    }

    return 0;
}
void calc(double a, double b, double *result_ptr){
    *result_ptr = (a)+(b);
    result_ptr++;
    *result_ptr = (a)-(b);
    result_ptr++;
    *result_ptr = (a)*(b);
    result_ptr++;
    *result_ptr = (double)(a)/(double)(b);
    //result_ptr++;

}

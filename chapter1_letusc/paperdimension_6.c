#include<stdio.h>
int main(){
    float l,b;
    printf("enter the dimensions of A0: ");
    scanf("%f %f", &l,&b);
    printf("dimensions of AO are %0.2f x %0.2f\n", l,b);
    printf("dimensions of A1 are %0.2f x %0.2f\n", b,(l/2));
    printf("dimensions of A2 are %0.2f x %0.2f\n", (l/2),(b/2));
    printf("dimensions of A3 are %0.2f x %0.2f\n", (b/2),(l/4));
    printf("dimensions of A4 are %0.2f x %0.2f\n", (l/4),(b/4));
    printf("dimensions of A5 are %0.2f x %0.2f\n", (b/4),(l/8));
    printf("dimensions of A6 are %0.2f x %0.2f\n", (l/8),(b/4));
    printf("dimensions of A7 are %0.2f x %0.2f\n", (b/4),(l/16));
    printf("dimensions of A8 are %0.2f x %0.2f\n", (l/16),(b/16));
    return 0;

}

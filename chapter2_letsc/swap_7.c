#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter the numbers a,b: ");
    scanf("%d%d", &a,&b);
    printf("values before swapping are a = %d, b=%d\n", a,b);
    temp = a;
    a=b;
    b=temp;
    printf("values before swapping are a = %d, b=%d\n", a,b);
    return 0;
}
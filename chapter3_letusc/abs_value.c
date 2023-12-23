#include<stdio.h>
int main(){
    int n;
    printf("enter the value: ");
    scanf("%d", &n);
    if(n>0){
        printf("absolute value is %d",n);
    }else if(n<0){
        printf("absolute value is %d", (-1)*n);
    }else{
        printf("0");
    }
    return 0;
}
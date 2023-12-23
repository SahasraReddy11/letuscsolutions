#include<stdio.h>
int main(){
    int n;
    printf("enter the value ");
    scanf("%d", &n);
    int count=0;
    while(n>0){
        if(n>100){
            count++;
            n-100;
        }else if(n>50){
            count++;
            n-50;
        }else if(n>10){
            count++;
            n-10;
        }
        else if(n>2){
            count++;
            n-2;
        }else{
            count++;
            n-1;
        }
    }
    printf("n is %d", n);
    printf("count is %d",count);
    return 0;
}
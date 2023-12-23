#include<stdio.h>
int main(){
    int x,y;
    printf("enter the co-ordinates: ");
    scanf("%d%d",&x,&y);
    if(x==0 && y!=0){
        printf("it is on y axis");
    }else if(x!=0 && y==0){
        printf("it is on x axis");
    }else if(x==0 && y==0){
        printf("origin");
    }else{
        printf("in the plane");
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
    int r,x,y;
    printf("calculate radius: ");
    scanf("%d", &r);
    printf("enter the coordinates");
    scanf("%d%d", &x,&y);
    if(pow(x*x+y*y,0.5) > r){
        printf("outside the circle");
    }else{
        printf("inside the circle");
    }
}
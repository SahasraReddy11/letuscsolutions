#include<stdio.h>
#include<math.h>
int main(){
    float x,y;
    printf("enter the coordinates: ");
    scanf("%f%f",&x,&y);
    float r=pow((x*x)+(y*y),0.5);
    float phi = atan(y/x);
    printf("polar coordinates are %f, %f",r,phi);
    
    return 0;
}
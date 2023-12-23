#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,x3,y3,s;
    printf("enter the co ordinates of 3 sides\n");
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
    float a = pow((x1-y1)*(x1-y1) + (x2-y2)*(x2-y2),0.5);
    float b = pow((x3-y3)*(x3-y3) + (x2-y2)*(x2-y2),0.5);
    float c = pow((x1-y1)*(x1-y1) + (x3-y3)*(x3-y3),0.5);
    s=(a+b+c)/2;
    float area = pow(s*(s-a)*(s-b)*(s-c),0.5) ;
    if(area==0){
        printf("collinear points");
    }else{
        printf("not collinear points");
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,s;
    printf("enter the sides of triangle\n");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    float area = pow(s*(s-a)*(s-b)*(s-c),0.5) ;
    printf("the area of triangle is %f", area);
    return 0;
}
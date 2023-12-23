#include<stdio.h>
int main(){
    float l,b;
    printf("enter the length and breadth of rectangle: ");
    scanf("%f%f", &l,&b);
    float rect_area = (float)2*(l+b) ;
    printf("rectangle perimeter is %f\n", rect_area);
    float r;
    printf("enter the radius of circle: ");
    scanf("%f",&r);
    printf("circumference of circle is %f", (2)*3.14*r);
    return 0;
}
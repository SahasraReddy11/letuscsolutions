#include<stdio.h>
int main(){
    float l,b;
    printf("enter the length and breadth of rectangle: ");
    scanf("%f%f", &l,&b);
    float rect_perimeter = (float)2*(l+b) ;
    float rect_area = (float)(l*b);
    if(rect_area> rect_perimeter){
        printf("area is greater");
    }else {
        printf("perimeter is greater");
    }
    return 0;
}
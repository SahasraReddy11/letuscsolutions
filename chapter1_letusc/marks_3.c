#include<stdio.h>
int main(){
    float s1,s2,s3,s4,s5;
    printf("Enter the marks of 5 subjects \n");
    scanf("%f %f %f %f %f", &s1,&s2,&s3,&s4,&s5);
    float total = s1+s2+s3+s4+s5;
    float per = (total/500)*100;
    printf("agregate marks : %f\n",total);
    printf("percentage: %f\n", per);
    return 0;

}
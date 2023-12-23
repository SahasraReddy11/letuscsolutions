#include<stdio.h>
#include<math.h>
int main(){
    int t,v;
    printf("enter the temperature: ");
    scanf("%d",&t);
    printf("enter the wind velocity: ");
    scanf("%d",&v);
    int wcf = 35.74 + (0.6215*t) + (0.4275*t - 35.75 ) * pow(v,0.16);
    printf("wcf is %d", wcf);

}
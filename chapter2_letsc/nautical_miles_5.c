#include<stdio.h>
#include<math.h>
int main(){
    int L1,L2,G1,G2;
    printf("enter the latitude co-ordinates: ");
    scanf("%d%d",&L1,&L2);
    printf("enter the longitude co-ordinates: ");
    scanf("%d%d",&G1,&G2);
    float D = 3963* acos((sin(L1)*sin(L2)) + (cos(L1)*cos(L2)* cos(G2-G1)));
    printf("nautical miles: %d", D);

    return 0;
}
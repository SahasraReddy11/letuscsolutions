#include <stdio.h>
int main() {
    float cp, sp, pl;

    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);
    pl = sp - cp;

    if (pl > 0) {
        printf("profit of: %.2f\n", pl);
    } else if (pl < 0) {
        printf("loss of: %.2f\n", -pl);
    } else {
        printf("no profit, no loss.\n");
    }

    return 0;
}

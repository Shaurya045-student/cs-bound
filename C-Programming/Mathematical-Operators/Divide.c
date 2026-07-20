#include <stdio.h>

int main() {
    int divisor, dividend;
    printf("Enter Divisor : ");
    scanf("%d", &divisor);
    printf("Enter Dividend : ");
    scanf("%d", &dividend);
    printf("Division of %d and %d is : %d", divisor , dividend, dividend/divisor);
    return 0;
}
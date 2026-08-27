#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c, sum, dif, pro, div;
    printf("Enter Number a : ");
    scanf("%d", &a);
    printf("Enter Number b : ");
    scanf("%d", &b);
    printf("\t\t\t\tCALCULATOR\n");
    printf("1:TO ADD\n");
    printf("2:TO SUBTRACT\n");
    printf("3:TO MULTIPLY\n");
    printf("4:TO DIVIDE\n");
    scanf("%d", &c);
    switch(c) {
        case 1 : sum = a + b;
                 printf("The sum of %d and %d is : %d", a,b,sum);
                 break;
        case 2 : dif = a - b;
                 printf("The difference of %d and %d is : %d", a,b,dif);
                 break;
        case 3 : pro = a * b;
                 printf("The product of %d and %d is : %d", a,b,pro);
                 break;
        case 4 : div = a / b;
                 printf("The Quotient of %d and %d is : %d", a,b,div);
                 break;
        default : printf("INVALID OPTION!");
    }
return 0;


}
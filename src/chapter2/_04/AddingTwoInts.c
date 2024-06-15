#include <stdio.h>

int main(void) {
    int int1 = 0;
    int int2 = 0;

    printf("Enter first int: ");
    scanf("%d", &int1);

    printf("Enter second int: ");
    scanf("%d", &int2);

    int sum = int1 + int2;

    printf("Sum is %d\n", sum);
}
#include <stdio.h>

int main(void) {
    printf("Enter two integers and I will tell you how they're related:  ");

    int num1, num2 = 0;

    scanf("%d %d", &num1, &num2);

    if(num1 == num2)
        printf("%d is equal to %d\n", num1, num2);
    if(num1 != num2)
        printf("%d is not equal to %d\n", num1, num2);
    if(num1 < num2)
        printf("%d is less than %d\n", num1, num2);
    if(num1 > num2)
        printf("%d is greater than %d\n", num1, num2);
    if(num1 <= num2)
        printf("%d is less than or equal to %d\n", num1, num2);
    if(num1 >= num2)
        printf("%d is greater than or equal to %d\n", num1, num2);
}
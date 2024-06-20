#include <stdio.h>

int square(int n) {
    return n*n;
}

int main(void) {
    for(int i = 1; i <= 10; i++) {
        printf("%d\t", square(i));
    }

    puts("");
}
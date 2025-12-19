
#include <stdio.h>

void swapNumbers(int *x, int *y) {
    int age;

    age = *x;
    *x = *y;
    *y = age;
}

int main() {
    int p = 5;
    int n = 10;

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", p, n);

    swapNumbers(&p, &n);

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", p, n);

    return 0;
}

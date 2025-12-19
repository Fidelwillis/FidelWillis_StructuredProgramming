
#include <stdio.h>

int main() {
    int number1 = 3;
    int number2 = 7;
    int sum;

    int *ptr1;
    int *ptr2;

    ptr1 = &number1; 
    ptr2 = &number1;    

    sum = *ptr1 + *ptr2;  

    printf("Sum of numbers: %d\n", sum);

    return 0;
}

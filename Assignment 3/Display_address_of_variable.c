
#include <stdio.h>

int main() {
    int number = 10;     
    int *ptr;          
    ptr = &number;        

    printf("Value of number: %d\n", number);
    printf("Value stored in ptr (address of number): %p\n", ptr);
    printf("Address of number: %p\n", &number);
    printf("Value accessed using *ptr: %d\n", *ptr);

    return 0;
}

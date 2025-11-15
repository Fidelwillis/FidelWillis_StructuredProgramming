
#include <stdio.h>

int main(void){
    // declaring and initializing the integer variables
    int num1;
    int num2;

    printf("Enter first number: \n");
    scanf("%d", &num1);

    printf("Enter second number: \n");
    scanf("%d", &num2);

    int addition = num1 + num2;
    printf("Sum = %d\n", addition);

    int substraction = num1 - num2;
    printf("Subtraction = %d\n", substraction);

    int multiplication = num1 * num2;
    printf("Multiplication = %d\n", multiplication);

    int division = num1 / num2;
    printf("Quotient = %d\n", division);

    int modulus = num1 % num2;
    printf("Modulus = %d\n", modulus);

    return 0;

    

}

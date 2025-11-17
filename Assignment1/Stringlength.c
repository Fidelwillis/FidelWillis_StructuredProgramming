
#include <stdio.h>
#include <string.h>

int main() {
    char name[100]; 

    printf("Enter your name: ");
    scanf("%99s", name); 

    
    printf("You entered: %s\n", name);

    // Find and display the length
    printf("Length of the string: %lu\n", strlen(name));

    return 0;
}

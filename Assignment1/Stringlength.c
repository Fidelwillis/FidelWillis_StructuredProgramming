
#include <stdio.h>
#include <string.h>

int main() {
    char name[100]; 

    // Ask the user for their name
    printf("Enter your name: ");
    scanf("%s", name); 

    
    printf("You entered: %s\n", name);

    // Find and display the length
    printf("Length of the string: %lu\n", strlen(name));

    return 0;
}

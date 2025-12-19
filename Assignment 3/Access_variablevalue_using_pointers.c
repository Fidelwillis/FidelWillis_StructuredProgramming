
#include <stdio.h>

int main() {
    int count = 10;        
    int *pCount;        

    pCount = &count;      

    *pCount = 20;          

    printf("Updated value: %d\n", count);

    return 0;
}

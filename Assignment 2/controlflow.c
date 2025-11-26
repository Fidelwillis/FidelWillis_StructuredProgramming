#include <stdio.h>
#include <windows.h>

int main(){
    int correct_pin = 1234;
    int user_pin;
    int attempts;

    for(attempts = 3; attempts > 0; attempts--){
        printf("Enter Pin: \n");
        scanf("%d", &user_pin);

        if(user_pin == correct_pin){
            printf("Access Granted. Door unlocked.\n");
            return 0;
        }else{
            if(attempts - 1 > 0){
                printf("Incorrect PIN, remaining attempts: %d\n", attempts - 1);
            }
        }
    }
    printf("Too many attempts system locked. Wait for 5 seconds\n");

    for(int i = 5; i > 0; i--){
        printf("%d", i);
        Sleep(1000);
    }
    printf("You can try again now.\n");
    
    return 0;
}

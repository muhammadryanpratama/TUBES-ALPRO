#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char passp[50];
    char type[50];
    int balance;
    int frequency;
    int gained;

} ClientUser12;


ClientUser12 BalanceSystem;

int balance;

void balancex(char username[50]) {
    int option1;
    FILE* file_client1;


    file_client1 = fopen("Data.bin", "rb");


    printf("\n===Check Balance===\n");

   printf("%s", username);
    while (fread(&BalanceSystem, sizeof(BalanceSystem), 1, file_client1)==1){


            if (strcmp(username, BalanceSystem.name) == 0) {
                int user_choice;

                printf("\nYour Balance is - %d", BalanceSystem.balance);

            }
            break;
        } fclose(file_client1);

}

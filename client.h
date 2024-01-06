#include <stdio.h>
#include <string.h>
#include "client_emoney.h"
#include "client_payment.h"
#include "client_balance.h"
typedef struct {
    char name[50];
    char passp[50];
    char type[50];
    int balance;
    int frequency;
    int gained;

} ClientUser;
 char username[50];

ClientUser TransferSystem;
int topup;
int balance;

void bank();
void procx();

void procx(char username[50]){

     int topup;
    int num;
    int loop;
    int i = 0;


    printf("\n INPUT ACCOUNT NUMBER : ");
    scanf ("%d", &num); 

 while (loop == 0) {

       printf ("\n INPUT HOW MUCH TO TOP UP : ");
        scanf ("%d", &topup);

       
    
    if (topup > 1000000)
    {
        printf ("\nMAXIMUM IS 1 MILLION");
        printf ("\nPLEASE INPUT AGAIN");
         if ( i == 3 ){

                    printf ("\n\nNUMBER OF TRIES HAVE REACH THE LIMIT!!!!\n");
                    printf ("GO EXIT TO THE MENU");

                    break;            
                }

                i++;
        

    }
        else
            {
                 Customer0 cust;

           FILE * file_client1 = fopen("Data.bin", "rb");
           FILE* file_client_2 = fopen("Datanew.bin", "wb");

 
            printf("\n");
              while (fread(&cust, sizeof(cust), 1, file_client1)){

    


                if (strcmp(username, cust.name) == 0) {

                cust.balance = cust.balance - topup ;

                printf("\n Your new balance is - %d", cust.balance);

    
                }
               
    
            fwrite(&cust, sizeof(cust), 1, file_client_2);
           
                fclose(file_client1);
                fclose(file_client_2);
                remove("Data.bin");
                rename("Datanew.bin", "Data.bin");
                printf ("\n\n=== TRANSACTION SUCCESFULL:) ===");
                                                                }
                                         
            loop++;
            }

    }
}




void bank(char username[50]) {
    int bank;
    int acc;
    FILE* file_client;
    FILE* file_client_baru;

    file_client = fopen("Data.bin", "rb");
    file_client_baru = fopen("database_user_new.bin", "wb");
    printf("\n\n===Bank Option===");
    printf("\n1. BCA \n2. BNI \n3. BRI");
    printf("\n");
    scanf("%d", &bank);

    switch (bank) {
    case 1:
        procx (username);
        break;
    
    case 2:
        procx (username);
        break;

    case 3:
        procx (username);
        break;


    
    default:
        printf("\nInvalid option!\n");
        printf("Please try again\n");
        break;
    }

}






void transfer(char username[50]) {
    int option1;
    int acc;
    int loop10;
    int i10 = 0;
    int tf;

    FILE* file_client;
    FILE* file_client_baru;

    file_client = fopen("Data.bin", "rb");
    file_client_baru = fopen("database_user_new.bin", "wb");

            printf("1. Transfer Between Bank\n");
            printf("2. Transfer Between Account\n");
            printf("CHOOSE OPTION :");
            scanf("%d", &option1);

    switch (option1) {
    case 1:
        bank(username);
        break;

    case 2:
       procx(username);
       break;

       default:
        printf("Invalid choice, Please select a valid option!\n");

        
        }

}



 
void Client_Homepage(char username[50]) {
    int option;
    FILE* file1;
    file1 = fopen("Data.bin", "rb");

    printf("\n\n1) Transfer\n2) Payment\n3) Balance\n4) e-money\n5) Exit\n\n");
    printf("Choose Option: ");
    scanf("%d", &option);

    switch (option) {
    case 1:
        transfer(username);
        break;

    case 2:
        payment(username);
        break;

    case 3:
        balancex(username);
        break;

    case 4:
        emoney(username);
        break;

    case 5:
        // Exit or return to menu
        break;

    default:
        printf("\nInvalid option!\n");
        printf("Please try again\n");
        break;
    }

    fclose(file1);
}
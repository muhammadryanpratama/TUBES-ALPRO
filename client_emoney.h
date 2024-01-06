#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    char passp[50];
    char type[50];
    int balance;
    int frequency;
    int gained;
} Customer0;


void proc ();

void proc(char username[50]){

     int topup2;
    int num2;
    int loop2;
    int i2 = 0;


    printf("\n INPUT ACCOUNT NUMBER : ");
    scanf ("%d", &num2); 

 while (loop2 == 0) {

       printf ("\n INPUT HOW MUCH TO TOP UP : ");
        scanf ("%d", &topup2);

       
    
    if (topup2 > 1000000)
    {
        printf ("\nMAXIMUM IS 1 MILLION");
        printf ("\nPLEASE INPUT AGAIN");
         if ( i2 == 3 ){

                    printf ("\n\nNUMBER OF TRIES HAVE REACH THE LIMIT!!!!\n");
                    printf ("GO EXIT TO THE MENU");

                    break;            
                }

                i2++;
        

    }
        else
            {
                 Customer0 cust;

           FILE * file_client1 = fopen("Data.bin", "rb");
           FILE* file_client_2 = fopen("Datanew.bin", "wb");

 
            printf("\n");
              while (fread(&cust, sizeof(cust), 1, file_client1)){

    


                if (strcmp(username, cust.name) == 0) {

                cust.balance = cust.balance - topup2 ;

                printf("\n Your new balance is - %d", cust.balance);

    
                }



               
    
            fwrite(&cust, sizeof(cust), 1, file_client_2);
           
                fclose(file_client1);
                fclose(file_client_2);
                remove("Data.bin");
                rename("Datanew.bin", "Data.bin");
                printf ("\n\n=== TRANSACTION SUCCESFULL:) ===");
                                                                }
                                         
            loop2++;
            }

    }
}




int emoney(char username[50]) {
    int num, option13;
   

    printf("1) Linkaja\n2) OVO\n3) DANA\n4) GOPAY\n5) Shopeepay\n6) E-TOL");
    printf("\n\nChoose what you want: ");
    scanf("%i", &option13);

    switch (option13) {

    case 1:
        proc (username);
        break;
        
        case 2:
        proc (username);
        break;

        case 3:
        proc (username);
        break;

        case 4:
        proc (username);
        break;

        case 5:
        proc (username);
        break;

        case 6:
        proc (username);
        break;
 

    default:
        printf("Invalid choice, Please select a valid option!\n");

    }
}
  
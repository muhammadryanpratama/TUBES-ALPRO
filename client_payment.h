#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct {
    char name[50];
    char passp[50];
    char type[50];
    int balance;
    int frequency;
    int gained;
}Customer;
char user[50];

      
                


void Internet(char username[50]){

    int num;
    int pay;
    int prov;
    char option;

     void data (char username[50]){
        Customer cust;
            printf ("\n [1] 4 GB 1 MONTH (Rp. 15.000) \n [2] 8 GB 1 MONTH (Rp 30.000)\n [3] 20 GB (Rp. 70.000) \n [4] 50 GB Rp. 200.000\n [5] 100 GB (Rp. 500.000)\n");
           
            

           FILE * file_client1 = fopen("Data.bin", "rb");
           FILE* file_client_2 = fopen("Datanew.bin", "wb");
 
            printf("\n");
              while (fread(&cust, sizeof(cust), 1, file_client1)){


            if (strcmp(username, cust.name) == 0) {
             printf("\n\nChoose option for data celluler : ");
            scanf ("%d", &pay);
               
                switch (pay)
                {
                case 1:
                     cust.balance = cust.balance - 15000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                     
                    break;

                     case 2:
                     cust.balance = cust.balance - 30000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                    break;

                     case 3:
                     cust.balance = cust.balance - 70000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                    break;

                     case 4:
                     cust.balance = cust.balance - 200000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                    break;

                     case 5:
                     cust.balance = cust.balance - 500000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                    break;

                
                default:
                    break;
                }
               

            } 
            fwrite(&cust, sizeof(cust), 1, file_client_2);
           


        }
        
    fclose(file_client1);
    fclose(file_client_2);
    remove("Data.bin");
    rename("Datanew.bin", "Data.bin");
            printf ("\n\n=== TRANSACTION SUCCESFULL:) ===");
        }

    

    void pc (char username [50]){

        Customer cust;

        printf ("\n 1) Rp. 10.000\n 2) Rp 20.000\n 3) Rp. 50.000\n 4) Rp. 100.000\n 5) Rp. 500.000\n");
                FILE * file_client1 = fopen("Data.bin", "rb");
           FILE* file_client_2 = fopen("Datanew.bin", "wb");
 
            printf("\n");
              while (fread(&cust, sizeof(cust), 1, file_client1)){


            if (strcmp(username, cust.name) == 0) {
             printf("\n\nChoose option for data celluler : ");
            scanf ("%d", &pay);
               
                switch (pay)
                {
                case 1:
                     cust.balance = cust.balance - 10000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                     
                    break;

                     case 2:
                     cust.balance = cust.balance - 20000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                    break;

                     case 3:
                     cust.balance = cust.balance - 50000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                    break;

                     case 4:
                     cust.balance = cust.balance - 100000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                    break;

                     case 5:
                     cust.balance = cust.balance - 500000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                    break;

                
                default:
                    break;
                }
               

            } 
            fwrite(&cust, sizeof(cust), 1, file_client_2);
        

        }
        
    fclose(file_client1);
    fclose(file_client_2);
    remove("Data.bin");
    rename("Datanew.bin", "Data.bin");
            printf ("\n\n=== TRANSACTION SUCCESFULL:) ===");
        }


printf("\n====Phone credit and Internet Packages====\n");
printf ("\n[1] TELKOMSEL\n[2] INDOSAT\n[3] XL\n[4] SMARTFREN\n[5] 3\n");
printf ("\nCHOOSE PROVIDER :");
scanf ("%d", &prov);
printf("\nINPUT PHONE NUMBER :");
scanf ("%d", &num);
printf("\n");
printf ("1) DATA CELULER\n2) PHONE CREDIT\n");
printf ("CHOOSE OPTION : ");
scanf ("%d",&option);

switch (option)
{

case 1:
    data (username);

    break;

case 2:
    pc (username);
    break;

default:
    break;
}

}






void PLN (char username [50]){
    int idpln;
    int pay;
    char option;

printf("\n====Electricity Token====\n");
printf("\nINPUT CUSTOMER ID :");
printf("\n");
scanf ("%d", &idpln);
printf ("\n 1) Rp. 20.000\n 2) Rp 50.000\n 3) Rp. 100.000");

        Customer cust;
                FILE * file_client1 = fopen("Data.bin", "rb");
           FILE* file_client_2 = fopen("Datanew.bin", "wb");
 
            printf("\n");
              while (fread(&cust, sizeof(cust), 1, file_client1)){


            if (strcmp(username, cust.name) == 0) {
             printf("\n\nChoose option for electricity token : ");
            scanf ("%d", &pay);
               
                switch (pay)
                {
                case 1:
                     cust.balance = cust.balance - 20000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                     
                    break;

                     case 2:
                     cust.balance = cust.balance - 50000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                    break;

                     case 3:
                     cust.balance = cust.balance - 100000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                    break;

                
                
                default:
                    break;
                }
               

            } 
            fwrite(&cust, sizeof(cust), 1, file_client_2);
        

        }
        
    fclose(file_client1);
    fclose(file_client_2);
    remove("Data.bin");
    rename("Datanew.bin", "Data.bin");
            printf ("\n\n=== ELECTRICITY TOKEN SUCCESFULLY ADDED :)  ===");
        }





void Wifi (char username [50]){
int intr;
int idintr;
int pay;
char option;

printf ("\n==INTERNET OPTION==");
printf ("\n[1] INDIHOME\n[2] FIRST MEDIA\n[3] BIZNET\n[4] MY REPUBLIC\n[5] MY NET\n");
scanf ("%d", &intr);
printf ("INPUT CUSTOMER ID : ");
scanf ("%d", &idintr);
printf ("\n\n===EXTEND WIFI===");
printf ("\n1) 3 MONTHS Rp. 500.000\n2) 6 MONTHS Rp. 900.000\n3) 9 MONTHS Rp. 1.200.000\n4) 1 YEAR Rp. 1.500.000\n5) 2 YEAR Rp. 2.500.000");

    Customer cust;

  FILE * file_client1 = fopen("Data.bin", "rb");
           FILE* file_client_2 = fopen("Datanew.bin", "wb");
 
            printf("\n");
              while (fread(&cust, sizeof(cust), 1, file_client1)){


            if (strcmp(username, cust.name) == 0) {
             printf("\n\nChoose option for data celluler : ");
            scanf ("%d", &pay);
               
                switch (pay)
                {
                case 1:
                     cust.balance = cust.balance - 500000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                     
                    break;

                     case 2:
                     cust.balance = cust.balance - 900000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                    break;

                     case 3:
                     cust.balance = cust.balance - 1200000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                    break;

                     case 4:
                     cust.balance = cust.balance - 1500000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                    break;

                     case 5:
                     cust.balance = cust.balance - 2500000 ;
                       fwrite(&cust, sizeof(cust), 1, file_client_2);
                      printf("\nYour Balance is - %d", cust.balance);
                    break;

                
                default:
                    break;
                }
               

            } 
            fwrite(&cust, sizeof(cust), 1, file_client_2);
           


        }
        
    fclose(file_client1);
    fclose(file_client_2);
    remove("Data.bin");
    rename("Datanew.bin", "Data.bin");
            printf ("\n\n=== TRANSACTION SUCCESFULL:) ===");
        }


void Infaq (char username [50]){
int inf;
int idintr;
int pay;
int dono;
char option;
Customer cust1;
printf ("\n==INFAQ AND DONATION OPTION==");
printf ("\n[1] Infaq\n[2] Rumah Yatim\n[3] BAZNAS\n[4] Sedekah Air Bersih\n[5] Beasiswa Yatim Peduli\n[6] Beasiswa Yatim Peduli\n[7] Human Initiative\n[8] Dompet Dhuafa\n[9] Daarul Qur'an\n[10] Yatim Mandiri\n");
scanf ("%d", &inf);

printf ("\n INPUT HOW MUCH TO ADD : ");
        scanf ("%d", &dono);


  FILE * file_client12 = fopen("Data.bin", "rb");
           FILE* file_client_3 = fopen("Datanew.bin", "wb");

 
            printf("\n");
              while (fread(&cust1, sizeof(cust1), 1, file_client12)){

                


            if (strcmp(username, cust1.name) == 0) {

                cust1.balance = cust1.balance - dono ;
                printf("\n Your new balance is - %d", cust1.balance);

    
            }
               
    
            fwrite(&cust1, sizeof(cust1), 1, file_client_3);
           
               
                                                                }
                fclose(file_client12);
                fclose(file_client_3);
                if(remove("Data.bin") == 0){
                  printf("fail in deleting the file\n");
                }
                else{
                  printf("success \n");
                }
                rename("Datanew.bin", "Data.bin");
                printf ("\n\n=== TRANSACTION SUCCESFULL:) ===");

                                                                
}

      






int payment(char username[50]) {
    int num, option12;
   

    printf("1) PLN\n2) Wi-Fi\n3) Phone credit and Internet Packages\n4) Infaq and Donation");
    printf("\n\nChoose what you want: ");
    scanf("%i", &option12);

    switch (option12) {

    case 1:
        PLN (username);
        break;

    case 2:
        Wifi (username);
        break;

    case 3 :
        Internet(username);
        break;

    case 4 :
        Infaq (username);
        break;


    default:
        printf("Invalid choice, Please select a valid option!\n");

    }
}
  
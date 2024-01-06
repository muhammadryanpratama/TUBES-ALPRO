#include<stdio.h>
#include<string.h>

typedef struct {
	char name[50];
	char passp[50];
	char type[50];
	int balance;
	int frequency;
	int gained;
}Regist;

FILE* file;

void Registerol() {
	Regist register_user;
	register_user.balance = 1000000;
	register_user.frequency = 0;
	register_user.gained = 20;
	
	file = fopen("Data.bin", "ab");
	if (file == NULL) {
		printf("There is an error in reading the file");
		
	}
	printf("====Register====\n\n");
	printf("Username - ");
	scanf("%s", &register_user.name);
	printf("Password - ");
	scanf("%s", &register_user.passp);
	printf("Type - ");
	scanf("%s", &register_user.type);

	fwrite(&register_user,sizeof(Regist),1,file);
	

	fclose(file);
	
}
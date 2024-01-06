#include<stdio.h>
#include"Admin_DeleteUser.h"

typedef struct {
	char NameVerif[50];
	char PassVerif[50];
	char type[50];
	
}AdminUser;


int AdminOption1;
void Admin_Homepage() {

	printf("Welcome dear Admin\n\n");

	printf("1)Delete User \n2)Exit \n\n");
	scanf("%d", &AdminOption1);

	switch (AdminOption1)
	{
	case 1:
		deleteuser();
		break;
		
	default:
		printf("pls enter within the given output");
	}




}
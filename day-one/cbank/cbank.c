#include <stdio.h>
#include <string.h>

int menu(){

char input[9];
printf("Input a command. Type \"help\" for a list of commands. \n");
scanf("%s", &input); 

printf("---DEBUG: You have entered: %s---\n", &input);

if (strcmp(input,"help")==0) {
	printf("AVAILABLE COMMANDS: \n");
	printf("help      - See this message again\n");
	printf("new_acc   - Create a new user account.\n");
	printf("view_list - View a list of all customers.\n");
	printf("edit      - Edit a user. ---PROVIDE MORE INFO---\n");
	printf("transact  - Create a transaction. ---PROVIDE MORE INFO---\n");
	printf("erase     - Delete a customer account.\n");
	printf("see	  - Show account information for selected customer.\n\n");
	menu();
   } else if (strcmp(input,"new_acc")==0){
	menu();

   } else if (strcmp(input,"view_list")==0){
	menu();

   } else if (strcmp(input,"edit")==0){
	menu();

   } else if (strcmp(input,"transact")==0){
	menu();

   } else if (strcmp(input,"erase")==0){
	menu();

   } else if (strcmp(input,"see")==0){
	menu();

   } else { printf("Please input a valid command\n\n"); menu();};
};

int new_acc(){


}

int view_list(){

}

int edit(){

}

int transact(){

}

int erase(){

}

int see(){

}

int main(){
menu();
	return 0;
}

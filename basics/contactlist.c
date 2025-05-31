#include <stdio.h> 
#include <string.h>
typedef struct {
    char phone_number[11];
    char name[25];
    char email[25];
} Contact;

Contact contact_list[25];
int contact_counter = 0;

void add_contact();
void show_contacts();
void edit_contact();
void delete_contact();
void search_contact();

int main () {
    printf("Welcome to a contact list app!\n");
    printf("Here we store peoples numbers names and emails!\n");
    printf("Here is what the app can do. Please select a choice:\n");

    while(1) {

    printf("\nWelcome to the menu. Please select a choice:\n");
    printf("1.)Add a Contact\n2.)Show all Contacts\n3.)Edit a Contact\n4.)Delete Contact\n5.)Search for Contact\n6.)Quit!\n");
    int choice = 0;
    scanf("%d", &choice);
   
        switch (choice) {
            case 1:
                printf("You selected to add a contact!\n");
                add_contact();
                break;


            case 2:
                printf("You selected to print all contacts!\n");
                show_contacts();
                break;

            case 3:
                printf("You selected choice 3!\n");
                break;

            case 4:
                printf("You selected to delete a contact!\n");
                delete_contact();
                break;

             case 5:
                printf("You selected choice 5!\n");
                break;

            case 6:
                printf("You selected choice 6!\n");
                return 0;

            default:
                printf("You did not select one a choices!");
        }     
    }


    return 0;
}

void add_contact() {


    char buffer[30]; 

    //clears the input buffer (newline char)
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF);
    
    //sctcspn deletes newline and adds null terminator as the last value!
    printf("The Phone Number:");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
    strcpy(contact_list[contact_counter].phone_number, buffer);

    printf("The email address: ");
    fgets(buffer, sizeof(buffer), stdin); 
    buffer[strcspn(buffer, "\n")] = '\0';
    strcpy(contact_list[contact_counter].email, buffer);

    printf("The name: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
    strcpy(contact_list[contact_counter].name, buffer);

    printf("Contact Added Succesfully\n");
    contact_counter++;
}

void show_contacts() {
    for(int i = 0; i < contact_counter; i++) {
        printf("Index: %d\n", i);
        printf("Name: %s\n", contact_list[i].name);
        printf("Email: %s\n", contact_list[i].email);
        printf("Number: %s\n", contact_list[i].phone_number);
        printf("--------------\n");
    }
}

void delete_contact() {
    int index_delete;
    while (1) { //loop until valid number is gotten 
        printf("please enter what index you would like to delete");
        scanf("%d", &index_delete);
        if(contact_counter == 0) {
            printf("The list is empty! Nothing to delete here.");
        } else if(index_delete >= 1 && index_delete <= contact_counter) break;

        
    }

    for( ; index_delete < contact_counter - 1; index_delete++) {
            contact_list[index_delete] = contact_list[index_delete+1];
        }
    printf("Contact deleted successfully.\n");
    contact_counter--;
}
    


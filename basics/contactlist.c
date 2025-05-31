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
    printf("1.)Add a Contact\n2.)Show all Contacts\n3.)Edit a Contact\n4.)Delete Contact\n5.)Search for Contact\n6.)Quit!\n\n");

    while(1) {

    printf("Welcome back to the menu. Please select a choice:\n");
    printf("1.)Add a Contact\n2.)Show all Contacts\n3.)Edit a Contact\n4.)Delete Contact\n5.)Search for Contact\n6.)Quit!\n\n");
    int choice = 0;
    scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("You selected to add a contact!\n");
                add_contact();
                break;


            case 2:
                printf("You selected choice 2!\n");
                break;

            case 3:
                printf("You selected choice 3!\n");
                break;

            case 4:
                printf("You selected choice 4!\n");
                break;

             case 5:
                printf("You selected choice 5!\n");
                break;

            case 6:
                printf("You selected choice 6!\n");
                break;

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

    contact_counter++;
}
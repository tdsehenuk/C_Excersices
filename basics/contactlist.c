#include <stdio.h> 

typedef struct {
    int phone_number[10];
    char names[25];
    char emails[25];
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
    printf("1.)Add a Contact\n2.)Show all Contacts\n3.)Edit a Contact\n4.)Delete Contact\n5.)Search for Contact\n6.)Quit!\n");

    while(1) {
    int choice = 0;
    scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("You selected choice 1\n");
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

}
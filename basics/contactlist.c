#include <stdio.h> 

typedef struct {
    int phone_number[10];
    char names[25];
    char emails[25];
} Contact;

Contact contact_List[25];
int contact_counter = 0;

int main () {

    printf("Welcome to a contact list app!\n");
    printf("Here we store peoples numbers names and emails!\n");

}
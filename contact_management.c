#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 50

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

// display a contact
void displayContact(struct Contact contact) {
    printf("Name : %s\n", contact.name);
    printf("Email : %s\n", contact.email);
    printf("Phone : %s\n", contact.phone);
}

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int numContacts = 0;
    int choice;

    while(1) {
        printf("Contact Management System\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Delete Contact\n");
        printf("4. Search Contact\n");
        printf("5. Update Contact\n");
        printf("6. Exit\n");
        
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (numContacts < MAX_CONTACTS)
                {
                    struct Contact newContact;
                    printf("Enter name: ");
                    scanf(" %[^\n]", newContact.name);
                    printf("Enter email: ");
                    scanf(" %[^\n]", newContact.email);
                    printf("Enter phone: ");
                    scanf(" %[^\n]", newContact.phone);

                    contacts[numContacts] = newContact;
                    numContacts++;
                    printf("Contact added successfully!\n");
                } else {
                    printf("Contact limit reached. Cannot add more contacts.\n");
                }
                break;
            case 2:
                if (numContacts == 0) {
                    printf("No contacts available.\n");
                } else {
                    printf("Contacts:\n");
                    for (int i = 0; i < numContacts; i++) {
                        printf("Contact %d:\n", i + 1);
                        displayContact(contacts[i]);
                    }
                }
                break;
            case 3:
                if (numContacts == 0) {
                    printf("No contacts available to delete.\n");
                } else {
                    int index;
                    printf("Enter contact number to delete (1-%d): ", numContacts);
                    scanf("%d", &index);
                    if (index < 1 || index > numContacts) {
                        printf("Invalid contact number.\n");
                    } else {
                        for (int i = index - 1; i < numContacts - 1; i++) {
                            contacts[i] = contacts[i + 1];
                        }
                        numContacts--;
                        printf("Contact deleted successfully!\n");
                    }
                }
                break;
            case 4:
                if(numContacts == 0) {
                    printf("No contacts available to search.\n");
                }else{
                    char searchName[50];
                    printf("Enter name to search: ");
                    scanf(" %[^\n]", searchName);
                    int found = 0;
                    for (int i=0; i < numContacts; i++) {
                        if (strncmp(searchName, contacts[i].name, strlen(searchName)) == 0)
                        {
                            printf("Contact found:\n");
                            displayContact(contacts[i]);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Contact not found.\n");
                    }
                }
                break;
            case 5:
                if (numContacts == 0) {
                    printf("No contacts available to update.\n");
                } else {
                    int index;
                    printf("Enter contact number to update (1-%d): ", numContacts);
                    scanf("%d", &index);
                    if(index < 1 || index > numContacts){
                        printf("Invalid contact number.\n");
                    } else {
                        struct Contact updatedContact;
                        printf("Enter new name: ");
                        scanf(" %[^\n]", updatedContact.name);
                        printf("Enter new email: ");
                        scanf(" %[^\n]", updatedContact.email);
                        printf("Enter new phone number: ");
                        scanf(" %[^\n]", updatedContact.phone);

                        contacts[index - 1] = updatedContact;
                        printf("Contact updated successfully!\n");
                    }
                    break;
                }
                break;
                case 6:
                    printf("Exiting...\n");
                    return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    return 0;
}
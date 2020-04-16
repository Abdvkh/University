#include <stdio.h>
#include <stdlib.h>

int n;
struct node {
  int value;
  struct node *next;
}*head;

void create_list(int n);
void delete_given_value(int value);
void display_list();

int main() {
   int command, valueToDelete;
   char msg[] = "\n\nWelcome to the program to work with linked list. \
         \nAvailable commands are given below:\
         \n1 - To reset the list\
         \n2 - To display list\
         \n3 - To delete given value\
         \n4 - To add elements to linked list\
         \n0 - To exit the program";

   printf("Enter the total number of nodes: ");
   scanf("%d", &n);
   create_list(n);

   do {
      printf("%s \nEnter the command's code: ", msg);
      scanf("%d", &command);
      switch (command) {
         case 1:
            printf("\nEnter the total number of nodes: ");
            scanf("%d", &n);
            create_list(n);
            break;
         case 4:
            printf("\nElements addition.");
            create_list(n);
            break;
         case 2:
            display_list();
            break;
         case 3:
            printf("\nEnter the value you want to delete: ");
            scanf("\n%d", &valueToDelete);
            delete_given_value(valueToDelete);
            break;
         default:
            printf("\nNo such command is available!");
      }
   } while(command != 0);
   return 0;
}

void create_list(int n){
   struct node *newNode, *temp;
   int value, i;

   head = (struct node *)malloc(sizeof(struct node));

   if(head==NULL){
      printf("\nFailed to allocate memory.");
   } else {
      printf("\nEnter the value of 1 node: ");
      scanf("\n%d", &value);

      head->value = value;
      head->next = NULL;

      temp = head;

      for(i=2; i <= n; i++){
         newNode = (struct node *)malloc(sizeof(struct node));

         if(newNode == NULL){
            printf("\nFailed to allocate memory.");
            break;
         } else {
            printf("\nEnter the value of %d node: ", i);
            scanf("\n%d", &value);

            newNode -> value = value;
            newNode -> next = NULL;

            temp->next = newNode;
            temp = temp->next;
         }
      }
      printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
  }
}

void display_list(/* arguments */) {
   struct node *current = head;
   printf("\nData in the list\n");
   while (current != NULL) {
      if (current -> value != 0) {
         if (n != 0) {
            printf("%d ", current -> value);
         } else {
            printf("\nNothing left\n");
         }
      }
      current = current -> next;
   }
}

void delete_given_value(int value) {
   struct node *toDelete;
   struct node *current = head;
   while (current != NULL) {
      if (current -> value == value) {
         toDelete = current;
         n -= 1;
         printf("\nData deleted [%d]", toDelete->value);
         free(toDelete);
         break;
      }
      current = current -> next;
   }
}

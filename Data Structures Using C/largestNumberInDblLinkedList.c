#include <stdio.h>
#include <stdlib.h>

void createList(int amount);
int getLargest();

struct node {
   struct node *prev;
   int value;
   struct node *next;
}*head;

int main() {
   int largest, n;

   printf("\nEnter amount of elements: ");
   scanf("\n%d", &n);
   createList(n);
   largest = getLargest();
   printf("\nLargest number in doubly linked list is [%d]", largest);

   return 0;
}

void createList(int amount) {
   int value;
   struct node *cur, *next;
   head = (struct node *)malloc(sizeof(struct node));
   next = (struct node *)malloc(sizeof(struct node));

   cur = head;
   printf("\nEnter value of 1st: ");
   scanf("%d", &value);

   cur->value = value;
   cur->next = next;
   cur->prev = NULL;

   for (int i = 2; i <= amount; i++) {
      if (head == NULL) {
         printf("\nFailed");
      } else {
         struct node *new = cur->next, *next;
         next = (i != amount) ? (struct node *)malloc(sizeof(struct node)) : NULL;
         printf("\nEnter value of %dth: ", i);
         scanf("%d", &value);
         new->value = value;
         new->next = next;
         new->prev = cur;

         cur = new;
      }
   }
}

int getLargest() {
   struct node *cur = head;
   int max = 0;
   while (cur != NULL) {
      int value = cur->value;
      if (value >= max) {
         max = value;
      }
      cur = cur->next;
   }
   return max;
}

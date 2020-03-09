#include <stdio.h>
#define MAX 100

int n; //number of elements
int front = -1; //front element index
int rare = -1; //end element index
int size; //size of cqueue
int cqueue[MAX]; //array aka cqueue on which operations going to be done
int operation; //operation's code

void display(); // displays an array
void enQueue(); //adds to queue given element
void deQueue(); //pushes given element into an array
void isEmpty(); //returns whether array is empty or not
void top(); //returns the latest

int main()
{
    printf("\nDefine the number of elements in stack: ");
    scanf("%d", &size);
    
    printf("\nAvaliable operations on circular queue with its code:\
    \n\n1 - display elements\
    \n2 - enter the given element to queue\
    \n3 - take out last element from queue\
    \n4 - return whether array is empty or not\
    \n5 - top of stack\
    \n6 - quit the program");
    
    do {
        printf("\nEnter the code of operation: ");
        scanf("%d", &operation);
    
        switch(operation){
            case 1: display(); break;
            case 2: enQueue(); break;
            case 3: deQueue(); break;
            case 4: isEmpty(); break;
            case 5: top(); break;
            default: printf("\nThere is no such command");
        }
    } while (operation != 6);

    return 0;
}

void isEmpty(){
    if(rare == -1){
        printf("\nStack is empty");
    } else {
        printf("\nStack is not empty");
    }
}

void display(){
    if(end != -1){
    for(int i=front; i<=rare; i++) printf("%d ", array[i]);
    } else {
        isEmpty();
    }
}

void push(){
    int number;
    
    if(end < size){
        printf("\nEnter the number which you are going to push:");
        scanf("%d", &number);
        end = end + 1;
        array[end] = number;
    } else {
        printf("\nStack is overflow");
    }
}

void pop(){
    if(end != -1){
        printf("\n%d element is poped", array[end]);
        end = end - 1;
    } else {
        isEmpty();
    }
}

void top(){
    if(end != -1){
        printf("\nTop element is %d", array[end]);
    } else {
        isEmpty();
    }
}

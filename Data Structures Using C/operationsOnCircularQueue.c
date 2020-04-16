#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int n = 0; //number of elements
int front = -1; //front element index
int end = -1; //end element index
int size; //size of cqueue
int cqueue[MAX]; //array aka cqueue on which operations going to be done
int operation; //operation's code

bool isFull();
bool isEmpty();
void printProperties(bool is_empty, bool is_full);
void display(); // displays an array
void enQueue(); //adds to queue given element
void deQueue(); //pushes given element into an array
void top(); //returns the latest

int main()
{
    printf("\nDefine the number of elements in stack: ");
    scanf("%d", &size);
    
    printf("\nAvaliable operations on circular queue with its code:\
    \n\n1 - display elements\
    \n2 - enter the given element to c. queue\
    \n3 - take out 1st element from c. queue\
    \n4 - return whether c. queue is empty/full/not\
    \n5 - top of circular queue\
    \n6 - quit the program");
    
    do {
        printf("\nEnter the code of operation: ");
        scanf("%d", &operation);
    
        switch(operation){
            case 1: display(); break;
            case 2: enQueue(); break;
            case 3: deQueue(); break;
            case 4: printProperties(isEmpty(), isFull()); break;
            case 5: top(); break;
            default: printf("\nThere is no such command");
        }
    } while (operation != 6);

    return 0;
}

bool isEmpty(){
    if(front == -1 && end == -1){
        return true;
    } else {
        return false;
    }
}

bool isFull(){
    if(n == size) return true; else return false;
}

void printProperties(bool is_empty, bool is_full){
    switch(is_full){
        case true: printf("\nCircular queue is full."); break;
        case false: printf("\nCircular queue is not full."); break;
        default: printf("\nSomething went wrong.");
    }
    
    switch(is_empty){
        case true: printf("\nCircular queue is empty."); break;
        case false: printf("\nCircular queue is not empty."); break;
        default: printf("\nSomething went wrong.");
    }
}


void display(){
    if(isEmpty() == false){
    for(int i=front; i<=end; i++) printf("%d ", cqueue[i]);
    } else {
        printProperties(isEmpty(), isFull());
    }
}

void enQueue(){
    int number;
    if(end < size && isFull() == false){
        printf("\nEnter the number which you are going to push:");
        scanf("%d", &number);
        front = end == -1 ? 0 : front;
        ++n;
        end = end + 1;
        cqueue[end] = number;
    } else {
        printProperties(isEmpty(), isFull());
    }
}

void deQueue(){
    if(isEmpty() == false){
        printf("\n%d element is deleted from queue", cqueue[front]);
        --n;
        front = front + 1;
    } else {
        printProperties(isEmpty(), isFull());
    }
}

void top(){
    if(isEmpty() == false   ){
        printf("\nTop element is %d", cqueue[end]);
    } else {
        printProperties(isEmpty(), isFull());
    }
}

#include<stdio.h>
#include <stdbool.h>
#define MAX 10

int queue[MAX];
int front=-1;
int rear=-1;

void enqueue(int x){
  if(rear==MAX-1){
    printf("Queue is full");
    return;
  }
  else if(front==-1 && rear==-1){
    front++;
    rear++;
    queue[rear]=x;
  }
  else{
     rear++;
    queue[rear]=x;
  }
}

void dequeue(){
  if(front==-1){
    printf("Queue is Empty");
    return;
  }
else if (front == rear){
    front=-1;
    rear=-1;
    
  }
  else{
     front++;
  }
}
bool isFull(){
  return(rear==MAX-1);
}
bool isEmpty(){
   return front == -1;
}
void display() {
    if (front == -1) {
        printf("queue is Empty\n");
        return;
    }
    printf("queue elements:\n");
    for (int i = front; i <= rear; i++) {
        printf("%d\n", queue[i]);
    }
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    printf("isEmpty: %s\n", isEmpty() ? "true" : "false");
    printf("isFull: %s\n", isFull() ? "true" : "false");

    return 0;
}
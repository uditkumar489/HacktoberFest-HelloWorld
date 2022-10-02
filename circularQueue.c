#include<stdio.h>
#include<stdlib.h>


struct queue{
    int front,rear,size;
    unsigned capacity;
    int *array;
};

struct queue* createQueue(int size){
    struct queue *q = struct queue*(malloc(struct queue));
    q->capacity = size;
    q-size = 0;
    q->front=0;
    q->rear=0;
    q->array = (int *)malloc(size*sizeof(int));
    return q;
}

int main(){
    struct queue *q = (struct queue*)malloc(sizeof(struct queue));
    q=createQueue(5);
    return 0;
}

#include"stack.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Implementation 1: BY SIMPLE ARRAY..........
struct arrayStack *createStack(int size){
    /*
        here create stack function dynamically allocate memory,we need to 
        manually free this memory later....
    */
    struct arrayStack *s = (struct arrayStack*)malloc(sizeof(struct arrayStack));
    s->top = -1;
    s->capasity = size;
    s->array = (int*)malloc((s->capasity)*sizeof(int));
    if(s->array == NULL){
        return NULL;
    }
    return s;
}
int isEmptyStack(struct arrayStack *s){
    return (s->top == -1);
}

int isFullStack(struct arrayStack* s){
    return(s->top == (s->capasity - 1));
}

void push(struct arrayStack *s, int data){
    if(isFullStack(s)){
        printf("Stack is Full. You can not push further!");
    }
    else{
        s->top = s->top + 1;
        s->array[s->top] = data;
    }
    
}

int pop(struct arrayStack *s){
    if(isEmptyStack(s)){
        printf("Stack is Empty.You can not pop from empty stack.");
        return INT_MIN;
    }
    else{
        return s->array[(s->top)--];
    }
}

int peek(struct arrayStack *s){
    return s->array[s->top];
}

int size(struct arrayStack *s){
    return s->capasity;
}

void print(struct arrayStack *s){
    if(!isEmptyStack(s)){
        for(int i = 0; i <= s->top; i++){
            printf("%d  ",s->array[i]);
        }
    }
    else{
        printf("Array is Empty.");
    }
}

void deleteStack(struct arrayStack *s){
    if(s != NULL){
        if(s->array != NULL){
            free(s->array);
        }
        free(s);
    }
}

//Implementation 2: BY LINKED LIST ....................
//#########################################################################
struct stackNode *_createStack(){
    return NULL;
}

int _isEmptyStack(struct stackNode *top){
    return (top == NULL);
}

void _push(struct stackNode **top, char data){
    struct stackNode *tempo = (struct stackNode*)malloc(sizeof(struct stackNode));
    if(tempo == NULL){
        printf("Unable to push data.MEMORY ALLOCATION ERROR !");
        return;
    }
    tempo->data = data;
    tempo->next = *top;
    *top = tempo;
}

char _pop(struct stackNode **top){
    if(_isEmptyStack(*top)){
        printf("Can not pop from empty stack!");
    }
    else{
        int popdata = (*top)->data;
        struct stackNode *tempo = (*top);
        *top = (*top)->next;
        free(tempo);
        return popdata;

    }
}

char _peek(struct stackNode *top){
    return top->data;
}

int _size(struct stackNode *top){
    int count = 0;
    while(top != NULL){
        count = count + 1;
        top = top->next;
    }
    return count;
}

void _print(struct stackNode *top){
    while(top != NULL){
        printf("%c ", top->data);
        top = top->next;
    }
    printf("\n");
} 

void _deleteStack(struct stackNode **top){
    struct stackNode *tempo = *top, *auxiliary;
    while(tempo != NULL){
        auxiliary = tempo->next;
        free(tempo);
        tempo = auxiliary;
    }
    *top = NULL;

}



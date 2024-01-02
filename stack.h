#ifndef _STACK_H
#define _STACK_H

/*
stack is ADT because we define how data are going to be stored 
and the operation a stack data structure support ,we need to define those operation.......
Main stack operation:1)Pop
                     2)Push
other secondary operation:1)Top
                          2)Size
                          3)IsEmpty
                          4)IsFull


Question 1: How to define a stack datastructure?How to realize it in C-Language?
            1.First we have to create the stack.
*/
// Implementation 1: BY SIMPLE ARRAY ................
struct arrayStack{
    int top;
    int capasity;
    int *array;
};
struct arrayStack* createStack(int size);
int isEmptyStack(struct arrayStack *s);
int isFullStack(struct arrayStack *s);
void push(struct arrayStack *s, int data);
int pop(struct arrayStack *s);
int peek(struct arrayStack *s);
int size(struct arrayStack *s);
void print(struct arrayStack *s);
void deleteStack(struct arrayStack *s);


//Implementation 2: BY LINKED LIST ..................
struct stackNode{
    char data;
    struct stackNode *next;
};

struct stackNode *_createStack();
int _isEmptyStack(struct stackNode *top);
void _push(struct stackNode **top, char data);
char _pop(struct stackNode **top);
char _peek(struct stackNode *top);
int _size(struct stackNode *top);
void _print(struct stackNode *top);
void _deleteStack(struct stackNode **top);




#endif
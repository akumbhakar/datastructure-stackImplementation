#include"stack.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char *word_char = "[{(10-56)*52}/10+(20+36)+{8*(10+1)";
    //char word_char2[strlen(word_char)+1];
    struct stackNode *s = _createStack();
    for(int i = 0; i < strlen(word_char); i++){
        if(word_char[i] == '[' || word_char[i] == '{' || word_char[i] == '('){
            _push(&s,word_char[i]);
        }
        if(word_char[i] == ']' || word_char[i] == '}' || word_char[i] == ')'){
            _pop(&s);
        }
    }

    if(_isEmptyStack(s)){
        printf("!!!!!!!!!!!!!!!!!Sequence is balanced!!!!!!!!!!!!!!!!");
    }
    else{
        printf("#####Sequence is not balanced#####");
    }
    

    _deleteStack(&s);
    printf("\n%c",_peek(s));
}
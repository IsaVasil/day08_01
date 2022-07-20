#include <stdio.h>

int sum(int a,int b){
    return a+b;
}
int minus(int a,int b){
    return a-b;
}
int mult(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}

typedef int(*operation_t)(int,int);

//int (*get(char op))(int,int){
operation_t get(char op){
switch (op){
case '+':
return sum;

case '-':
return minus;
case '*':
return mult;

case '/':
return div;

default:
return NULL;
}
}

typedef unsigned int litters_t;

int main(){
litters_t rakiq;
//get('+')(5,6);

    return 0;
}
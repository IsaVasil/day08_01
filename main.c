#include <stdio.h>

/*void printValue(int num){
    printf("value %d\n",num);
}
void printhello(int count){
    for(int i=0;i<count;i++){
        printf("hello\n");
    }
}*/

void map(int *arr,int len,int(*f)(int)){
    for(int i=0;i<len;i++){
        arr[i]=f(arr[i]);
    }
    for(int i=0;i<len;i++){
        printf("%d",arr[i]);
    }

}
int doubleNum(int num){
    return 2*num;
}


int main(){
    int arr[]={1,1,1,1,1};
    map(arr,5,doubleNum);
  /*void (*fp)(int);
  fp=printhello;
  fp(5);
  fp=printValue;
  fp(5);*/
  /*void(*fp[2])(int);
  fp[0]=printhello;
   fp[1]=printValue;
   fp[0](4);
    fp[1](4);*/
    return 0;
}
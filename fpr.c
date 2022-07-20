#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define count 10
#include '/~/Desktop/mmsCamp/day07/ramdoms.h'
int comp(const void num1,const void* num2){
    double a = *(double*)num1;
     double b = *(double*)num2;
     if(fabs(a-b)<e){
        return 0;
     }
     else if(a>b){
        return 1;
     }
     return -1;
}
int main(){
    randint();
    double arr[count];
    for(int i=0; i<count;i++){
        arr[i]=randreal(5,10);
        qsort(arr,count,sizeof(*arr),comp);
        
    }

}
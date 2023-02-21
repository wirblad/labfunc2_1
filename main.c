#include <stdio.h>



void Swap(int *p1, int *p2);


void main(){

    int i=1;
    int j = 2;

    Swap(&i,&j);
}

void Swap(int *p1, int *p2){

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
}
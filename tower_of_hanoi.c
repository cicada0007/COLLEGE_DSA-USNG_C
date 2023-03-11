#include<stdio.h>
int main(){
    int n=3;
    
    TOH(n,'A','C','B');
    return 0;
}

void TOH(int n,char x,char y,char z){
    if(n>0){
        TOH(n-1,x,z,y);
        printf("%c to %c\n",x,y);
        TOH(n-1,z,y,x);
    }
}


output

A to C
A to B
C to B
A to C
B to A
B to C
A to C

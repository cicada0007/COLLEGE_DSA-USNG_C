#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
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

#include<stdio.h> 
#include<stdlib.h>

int a[20],n,var,i,pos,choice;

void create();
void display();
void insert();
void delete();

int main(){
    
    while(1){
        printf("1.CREATE \n2.DISPLAY \n3.INSERT \n4.DELETE");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            delete();
            break;         
        default:
            printf("INVALID OPERATION");
            break;
        }
    }
}

void create(){

    n=4
    printf("ENTER THE ARRAY");

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

void display(){

    for (int i = 0; i < n; i++){
        printf("THE ELEMET OF THE ARRAY IS %d ",a[i]);
    }
}

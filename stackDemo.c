#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
int top = -1;
int array[MAX];
int decimalToBinary(int num){
    int binary =0;
    int place = 1;
    while (num>0)
    {  
        binary = ((num%2)*place)+binary;
        place = place*10;
        num = num/2;
    }
    return binary;
    
}
void push(int data){
    if(isFull()==1){
        printf("Stack overflow");
        return;
        }
    else{
    top = top+1;
    array[top] = data;
    }
}
void pop(){
    int value;
    if(isEmtry()==1){
        printf("Stack underflow");
        return;
    }
    else{
        value = array[top];
        printf("the remove data is %d",value);
        top = top-1;
        }
}
void print(){
    printf("\n");
    for(int i = top;i>=0;i--){
    printf("%d ",array[i]);
    }
}

int isEmtry(){
    if(top == -1)
        return 1;
    else
        return 0;
}
int isFull(){
    if (top == MAX-1)
        return 1;
    else
        return 0;
}
int main(){
    int data;
    int user = 0;
    while(1){
        printf("\n1.add\n2.remove\n3.print all\n4.emtry all\n5.Quit\nchoose your choice:");
        scanf("%d",&user);
        switch (user)
        {
        case 1:
            printf("enter number in decimal number :");
            scanf("%d",&data); 
            push(decimalToBinary(data));
            break;
        case 2:
            pop();
            break;
        case 3:
             print();
            break;
        case 4:
            top = -1;
            printf("Array is now Emtry.");
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("Error, Please enter again...");
            break;
        }
            
        
    }
}
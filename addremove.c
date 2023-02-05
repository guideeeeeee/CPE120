#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX_SIZE 256
void main(){
    int ans,x[MAX_SIZE],n=0,i,j,num =0,min=0,temp=0,new;
    do
    {
        printf("\nDo you want to add or remove number?(add = 1 , remove = 0):");
        scanf("%d",&ans);
        if (ans ==1){
        printf("Enter number:");
        scanf("%d",&num);
        x[n]=num;
        for(i=0;i<=n;i++){
            min = i;
            for (j = i+1 ;j<=n;j++){
                if(x[j] < x[min]){
                min = j;
                }
            }
     temp = x[i];
     x[i] = x[min];
     x[min] = temp;
        }
        printf("Result = ");
        for(i=0; i<=n;i++){
      printf("%d ",x[i]);
        }
        n=n+1;
        }
        if(ans == 0){
    printf("Enter number you want to remove :");
    scanf("%d",&num);
    for(i = 0; i<=n;i++){
        if(x[i] == num){
            for (j = i + 1; j < n; j++) {
                x[j - 1] = x[j];
            }
            n--;
            break; 
        }
    }
    printf("Result = ");
    for(i=0; i<n;i++){
        printf("%d ",x[i]);
    }
}

    } while (ans == 1 || ans == 0);
}
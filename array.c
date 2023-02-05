#include <stdio.h>
void main(){
    int num[13][13];
    for (int i=2;i<=12;i++){
        for (int j=2;j<=12;j++){
            num[i][j]= i*j;
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
    

}
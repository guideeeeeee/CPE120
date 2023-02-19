#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main(){
    int user,num;
    struct node *travel,*comp;
    struct node *first =NULL;
    do
    {
        printf("\nAdd(1) or Remove(0) :");
        scanf("%d",&user);
        if(user == 1){
            struct node* newnode = malloc(sizeof(struct node));
            printf("Enter number:");
            scanf("%d",&num);
            newnode ->data = num;
            newnode ->link = NULL;
            if(first == NULL){
                first = newnode;
            }
            else if  (first->data >= newnode->data){       
                    travel = first;
                    first = newnode;
                    first->link = travel;
            }
            else if(first->link !=NULL){
                travel = first;
                comp = travel->link;
                while (travel->link != NULL)
                {
                    if(comp->data < newnode->data){
                        travel = comp;
                        comp = travel->link;
                    }
                    else if (travel->data < newnode->data){
                        travel ->link = newnode;
                        travel = newnode;
                        travel->link = comp;
                        break;
                    }
                }
                if (travel->link ==NULL)
                    travel->link = newnode;
                
            }
            else{
                first->link = newnode;
            }
            travel = first;
            while(travel != NULL)
            {
                
                printf("%d ",travel->data);
                travel = travel->link;
            }
        }
        else if(user ==0){
            printf("Enter number:");
            scanf("%d",&num);
            if(first == NULL)
                continue;
            travel = first;
            comp = travel->link;
            
            if(first->data == num){
                    first = travel->link;
                    free(travel);
                }
            else{
            while (travel->link !=NULL)
            {
                
                if(comp->data == num){
                    travel->link = comp->link;
                    free(comp);
                    break;
                }
                else{
                    travel = comp;
                    comp = travel->link;
                }

            }
            }
            travel = first;
            while(travel != NULL)
            {
                
                printf("%d ",travel->data);
                travel = travel->link;
            }
        }
    } while (user ==0 || user ==1);
    
}
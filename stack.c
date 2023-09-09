#include "stack.h"

struct node
{
    int info ;
    struct node *next ;
};

struct node *start = NULL ;

void create()
{
    struct node *temp , *ptr ;

    temp = (struct node*)(malloc (sizeof(struct node))) ;
    if(temp == NULL)
        printf("\nNo space in the memory !\n") ;
    else{

        printf("\nEnter first element data : ") ;
        scanf("%d" , &temp->info) ;
        temp->next = NULL ;

        if (start == NULL)
            start = temp ;

        else{
            ptr = start ;
            while (ptr->next != NULL){
                ptr = ptr->next ;
            }

            ptr->next = temp ;
        }
    }
}



void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nThe list is empty\n");
                return;
        }
        else
        {
                ptr=start;
                printf("\nThe List elements :\n");
                while(ptr!=NULL)
                {
                        printf("%d\t",ptr->info );
                        ptr=ptr->next ;
                }
        }
}


void Insert_End()
{
    struct node *temp , *ptr ;

    temp = (struct node*)(malloc (sizeof(struct node))) ;
    if(temp == NULL)
        printf("\nNo space in the memory !\n") ;
    else{

        printf("\nEnter element data : ") ;
        scanf("%d" , &temp->info) ;
        temp->next = NULL ;

        if (start == NULL)
            start = temp ;

        else{
            ptr = start ;
            while (ptr->next != NULL){
                ptr = ptr->next ;
            }

            ptr -> next= temp ;
        }
    }
}

void delete_begin()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is Empty:\n");
                return;
        }
        else
        {
                ptr=start;
                start=start->next ;
                printf("\nThe deleted element is :%d\t",ptr->info);
                free(ptr);
        }
}

void delete_end()
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nThe list is Empty\n");
                return;
        }
        else if(start->next ==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nThe deleted element is:%d\t",ptr->info);
                free(ptr);
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("\nThe deleted element is:%d\t",ptr->info);
                free(ptr);
        }
}




//Code With Harry//
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}
node;

//Fn//
void linklistTraverse(node*ptr)
{
    while(ptr != NULL)
    {
    printf("Elements: %d\n",ptr->data);
    ptr = ptr->next;
    }

}



int main(void)
{
    node *head = (node*)malloc(sizeof(node));
    node *second = (node*)malloc(sizeof(node));
    node *third = (node*)malloc(sizeof(node));
    node *fourth = (node*)malloc(sizeof(node));
    head->data = 1;
    head->next = second;
    //sec//
    second->data = 2;
    second->next = third;
    //third//
    third->data = 3;
    third->next = fourth;
    //fourth//
    fourth->data = 4;
    fourth->next = NULL; 
    linklistTraverse(head);
    return 0;
}



#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int num)
{
    struct node *temp, *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data=num;
    if (head == NULL)
        head = new;

    else
    {
        temp=head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new;
        new->next=NULL;
    }
}

void insertatbeg(struct node *str,int num)
{
    struct node *new,*temp;
    new=(struct node *)malloc(sizeof(struct node)); 
    new->data=num;
    if(str==NULL)
    head=new;

    else{
        temp=head;
        head=new;
        new->next=temp;
    }

}

void display(struct node *head)
{
    struct node *print;
    print=head;
    while(print->next!=NULL)
    {
    printf("%d,",print->data);
    print=print->next;
    }
}

int main()
{
    insert(11);
    insert(12);
    insert(13);
    insert(14);
    insert(15);
    insert(16);
    insert(17);
    insert(18);
    insert(19);
    insert(10);
    display(head);
    insertatbeg(head,22);
    printf("\n");
    display(head);
}
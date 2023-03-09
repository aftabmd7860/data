#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *start=NULL;

void intsertvalue(int item)
{
    struct node *temp,*move;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data = item;
    if(start==NULL)
    start=temp;
    else 
    {
        move=start;
        while(move->next!=NULL)
           move=move->next;
           move->next=temp;

    }
}

void display(struct node *start)
{
    while(start)
    {
        printf("%d,",start->data);
        start=start->next;
    }
}

void deletfirst(struct node *temp)
{
    struct node **del=NULL;
    if(start!=NULL)
    {
    temp=start;
    start=temp->next;
    free(del);
    }
}


int main()
{
  intsertvalue(12);
  intsertvalue(13);
  intsertvalue(14);
  intsertvalue(15);
  intsertvalue(16);
  intsertvalue(17);
  intsertvalue(18);
  intsertvalue(19);
  display(start);
  deletfirst(start);
  printf("\n");
  display(start);
  return 0;
}
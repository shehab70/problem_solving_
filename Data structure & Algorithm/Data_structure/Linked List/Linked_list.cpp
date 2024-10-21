#include <stdlib.h>
#include <stdio.h>

 struct Node 
{
    int data;
    Node *next;
};

struct Node  *Head; // a global variable , can be acessed anywhere
Node * insert(Node * Head ,int x)
void print(Node * Head);
int main(void)
{
    Head = NULL;
    printf("How many Number?\n");
    int n, i, x;
    scanf("%d", &n); 
    for (i = 0; i < n; i++)
    {
        /* code */
        printf("Enter the number \n");
        scanf("%d", &x);
        insert(Head,x);
        print();
    }
    return 0;
}
Node * insert(Node * Head ,int x)
{
    struct Node  *temp = (Node *)malloc(sizeof( struct Node ));
    temp->data = x;
    temp->next = Head;
    Head = temp;
}
void print (Node * Head){
     while (temp !=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
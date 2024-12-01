#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* createnode(int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

struct Node* createlinklist(int n){
    struct Node* head=NULL;
    struct Node* temp=NULL;
    struct Node* current=NULL;

    for(int i=0; i<n; i++){
        int data;
        printf("Enter data for node %d :",i+1);
        scanf("%d",&data);
        temp=createnode(data);
        if(head==NULL){
            head=temp;
        }else{
            current->next=temp;
        }
        current=temp;

    }
return head;

}

void display(struct Node* head){
    struct Node* temp=head;
    while(temp != NULL){
        printf("%d-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main (){

    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    struct Node* head = createlinklist(n);
        printf("The created linked list is: ");
             display(head);


    return 0;
}

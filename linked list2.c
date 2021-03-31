#include<stdio.h>
#include<stdlib.h>

struct node
{

    int data;
    struct node *next

};

void recursive(struct node *head, struct node **headref)
{
    struct node *first;
    struct node *rest;

    if(head == 0)
    {
        return;
    }
    first = head;
    rest = first->next;
    if(rest == 0)
    {
        *headref = first;
        return;

    }

    recursive(rest , headref);

    rest->next = first;
    first->next = 0;

}


void reverse(struct node **head)
{
    recursive(*head, head);
}


int main()
{
    int c,n=1,front= -1,rear = -1,b,temp1=-1,cd=1;
    struct node *head, *temp, *newnode, *last, *fast, *slow,*extra;
    head=0;

    while(n!=0)
    {
        printf("enter the value 0 for new node, 1 for print value, 2 for insert value front, 3 for insert value in between, 4 for delet infornt, 5 for delect that value,6 for after delet, 7 for count, 8 for middle node, 9 for shotting");
        scanf("%d",&b);
        if(b==0){
        printf("how many value you enter");
        scanf("%d",&c);
        for(int i=0;i<c;i++)
        {
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode ->data);
        newnode->next = 0;

        if(head ==0)
        {
            head=temp=newnode;
            front = 0;
            rear = 0;
            temp1 = 0;
        }
        else{
            temp->next = newnode;
            temp = newnode;
            rear +=1;
            temp1 +=1;
        }}}
        else if(b==1){
        temp = head;

            for(int i=front;i<=rear;i++){

            printf("%d\n",temp->data);
           temp = temp->next;


        }}
        else if(b==2)
        {
            for(int i=0;i<=2;i++)
            {
                last = head->next;
                head = last;
                front +=1;
            }
        }
        else if(b==3){
        temp = head;

            for(int i=0;i<=temp1;i++){

            printf("%d\n",temp->data);
           temp = temp->next;


        }}
        else if(b==4)
        {
            for(int i=0;i<=2;i++)
            {

                temp1 -=1;
            }
        }
        else if(b==5)
        {
            temp = head;
            fast = temp;

            while(fast!= 0)
            {
                slow = temp->next;
                fast = temp->next;
                if(fast->next ==0)
                {
                    printf("%d",slow->data);
                }

            }
        }

        else if(b==6){
        temp = head;
        rear = rear -1;
            while(temp!=0)
            {
                if(front == rear)
                {
                   printf("%d\n",temp->data);

                }
                front += 1;
                rear  -= 1;
                temp = temp->next;
            }


        }
        else if(b==7)
        {
            reverse(&head);
        }
        else{
            n=0;
        }

}}

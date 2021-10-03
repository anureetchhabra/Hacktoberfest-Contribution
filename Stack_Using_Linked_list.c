// #include<stdio.h>
// #include<stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void linked_list_traversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// int isEmpty(struct Node*top)
// {
//     if (top==NULL)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
    
// }

// int isFull(struct Node*top)
// {
//     struct Node *p=(struct Node*)malloc(sizeof(struct Node));
//     if (p==NULL)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
    
// }

// struct Node* push(struct Node*top,int x)
// {
//     if (isFull(top))
//     {
//         printf("Stack Overflow\n");
//     }
//     else
//     {
//         struct Node *n=(struct Node*)malloc(sizeof(struct Node));
//         n->data=x;
//         n->next=top;
//         top=n;
//         return top;
//     }
    
// }

// int pop(struct Node**top)
// {
//     if (isEmpty(*top))
//     {
//         printf("Stack Underflow\n");
//     }
//     else
//     {
//         struct Node*n=*top;
//         *top=(*top)->next;
//         int x=n->data;
//         free(n);
//         return x;
//     }
    
// }


// int main()
// {
//     struct Node *top=NULL;
//     int y;
//     printf("Enter the element you want to push\n");
//     scanf("%d",&y);
//     top=push(top,y);
//     top=push(top,78);
//     top=push(top,7);
//     int ele=pop(&top);
//     printf("Popped element is %d\n",ele);
//     linked_list_traversal(top);
//     return 0;
// }





// IMPLEMENTATION BY NOT USING POINTER IN TOP





#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};
struct Node *top=NULL;  // DACLARING TOP AS GLOBAL VARIABLE SO AS TO CHANGE IT IN THE MAIN FUNC

void linked_list_traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node*top)
{
    if (top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int isFull(struct Node*top)
{
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
    if (p==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

struct Node* push(struct Node*top,int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct Node *n=(struct Node*)malloc(sizeof(struct Node));
        n->data=x;
        n->next=top;
        top=n;
        return top;
    }
    
}

int pop(struct Node*tp)
{
    if (isEmpty(tp))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        struct Node*n=tp;
        top=tp->next;
        int x=tp->data;
        free(tp);
        return x;
    }
    
}


int main()
{
    
    int y;
    printf("Enter the element you want to push\n");
    scanf("%d",&y);
    top=push(top,y);
    top=push(top,78);
    top=push(top,7);
    int ele=pop(top);
    printf("Popped element is %d\n",ele);
    linked_list_traversal(top);
    return 0;
}
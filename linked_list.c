#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node *next;
}node;

void add_node(node *head, int num) {
    node * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = malloc(sizeof(node));
    current->next->num = num;
    current->next->next = NULL;
}

void ft_printer(node *head)
{
    node *tmp = head;

    while (tmp != NULL)
    {
        if (tmp->next == NULL)
            printf("%d", tmp->num);
        else
            printf("%d-", tmp->num);
        tmp = tmp->next;
    }
    printf("\n");
}

void ft_free(node* head)
{
   node *tmp;

   while (head != NULL)
    {
       tmp = head;
       head = head->next;
       free(tmp);
    }

}

int main()
{
    node *head;
    head = malloc(sizeof(node));
    head->next= NULL;
    head->num=1;
    add_node(head, 10);
    add_node(head, 20);
    add_node(head, 30);
    add_node(head, 40);
    add_node(head, 50);
    add_node(head, 60);
    add_node(head, 70);
    add_node(head, 80);
    add_node(head, 90);
    add_node(head, 100);
    ft_printer(head);
    ft_free(head);
}

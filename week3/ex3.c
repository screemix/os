#include <stdio.h>
#include <stdlib.h>
struct Node {
    int num;
    struct Node* next;
};
void print_list(struct Node* head){
    while (head != NULL){
        printf("%d ", head->num);
        head = head->next;
    }
}
void insert_node(struct Node* new_node, struct Node* aim_node){
    new_node->next = aim_node->next;
    aim_node->next = new_node;
}
void delete_node(struct Node* aim_node, struct Node* head){
    struct Node * prev = NULL;
    while (head!=NULL){
        if (head->num==aim_node->num){
            if (prev!=NULL){
                prev->next = head->next;
            }
            free(head);
            break;
        }
        prev = head;
        head = head->next;

    }

}
int main(){
    /*testing our structure*/

    /*creating 3 new nodes*/
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    /*allocating memory for them*/
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    /*fill the values and connecting them together*/
    head->num = 1;
    head->next = second;
    second->num = 2;
    second->next = third;
    third->num = 3;
    third->next = NULL;


    /*testing print function*/
    print_list(head);
    printf("\n");

    /*testing insertion function*/
    /*creating a new node*/
    struct Node* fourth = NULL;
    fourth = (struct Node*)malloc(sizeof(struct Node));
    fourth->num = 4;
    fourth->next = NULL;

    /*the test itself*/
    insert_node(fourth, head);
    print_list(head);
    printf("\n");


    /*testing deleting function*/
    delete_node(fourth, head);
    print_list(head);

    return 0;
}
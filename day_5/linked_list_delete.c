// You will extend the previous assignment with list_add() and list_find() 
// and add a function called list_delete() that will find and remove the node containing the integer value if it is in the list.

#include <stdio.h>
#include <stdlib.h>

void list_add(lst, value)
    struct list *lst;
    int value;
{	
    /* Append the value to the end of the linked list. */
  	struct lnode *new = (struct lnode*) malloc(sizeof(struct lnode));
  	if (lst->tail != NULL) {
    	lst->tail->next = new;
    };
  	new->value = value;
    new->next = NULL;
    lst->tail = new;
  	if (lst->head == NULL) {
    	lst->head = new;
    };
}

void list_remove(lst, value)
    struct list *lst;
    int value;
{
    /* Remove the value from the linked list. */
  	struct lnode *curr = lst->head;
  	struct lnode *prev = NULL;
  
  	while (curr != NULL) {
      	if (curr->value == value) {
          	if (prev == NULL) {
            	lst->head = curr->next;
                if (lst->head == NULL) {
                    lst->tail = NULL;
                };
            } else {
            	prev->next = curr->next;
              	if (curr->next == NULL) {
                	lst->tail = prev;
                };
            };
          	struct lnode *temp = curr;
          	curr = curr->next;
          	free(temp);
        } else {
          	prev = curr;
      		curr = curr->next;
        };
    };
}

struct lnode {
    int value;
    struct lnode *next;
};

struct list {
  struct lnode *head;
  struct lnode *tail;
};

int main()
{
    void list_add();
    void list_dump();
    struct lnode * list_find();

    struct list mylist;
    struct lnode * mynode;

    mylist.head = NULL;
    mylist.tail = NULL;

    list_add(&mylist, 10);
    list_add(&mylist, 20);
    list_add(&mylist, 30);
    list_dump(&mylist);

    list_remove(&mylist, 42);

    list_remove(&mylist, 10);
    list_dump(&mylist);

    list_remove(&mylist, 30);
    list_dump(&mylist);

    list_add(&mylist, 40);
    list_dump(&mylist);

}

void list_dump(lst)
    struct list *lst;
{
    struct lnode *cur;
    printf("\nDump:\n");
    for(cur=lst->head; cur != NULL; cur=cur->next) {
        printf("  %d\n", cur->value);
    }
}

// You will a set of supporting functions using the following structure 
// to implement a subset of the Python dict class in C. 
// Some code and method signatures have been provided for you 
// as well as a main() program and some support routines from the lecture slides. 
// There is a good deal of discussion of this application in the lecture materials associated with this assignment.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* print(dct) */
/* {'z': 'W', 'y': 'B', 'c': 'C', 'a': 'D'} */
void pydict_print(struct pydict* self)
{	
  	struct dnode* curr = self->head;
  	
  	printf("{");
  	while (curr != NULL) {
      	printf("'%s': '%s'", curr->key, curr->value);
      	curr = curr->next;
      	if (curr != NULL) {
        	printf(", ");
        };
    };
  	printf("}\n");
}

int pydict_len(const struct pydict* self)
{
    return self->count;
}

/* find a node - used in get and put */
struct dnode* pydict_find(struct pydict* self, char *key)
{	
  	struct dnode* curr = self->head;
  	
    while (curr != NULL) {
    	if (strcmp(curr->key, key) == 0) {
        	return curr;
        };
      	curr = curr->next;
    };
  	return NULL;
}

/* x.get(key) - Returns NULL if not found */
char* pydict_get(struct pydict* self, char *key)
{	
  	struct dnode* find = pydict_find(self, key);
  	return find ? find->value: NULL;
}

/* x[key] = value; Insert or replace the value associated with a key */
void pydict_put(struct pydict* self, char *key, char *value)
{
  	struct dnode* find = pydict_find(self, key);
  	
  	if (find != NULL) {
      	free(find->value);
    	find->value = strdup(value);
    } else {
    	struct dnode* new_node = malloc(sizeof(struct dnode));
      	new_node->key = strdup(key);
        new_node->value = strdup(value);
      	new_node->next = NULL;
      	
      	if (self->head == NULL) {
        	self->head = new_node;
        } else {
        	self->tail->next = new_node;
        };
      	self->tail = new_node;
      
      	self->count++;
    };
}

struct dnode {
    char *key;
    char *value;
    struct dnode *next;
};

struct pydict {
  struct dnode *head;
  struct dnode *tail;
  int count;
};

/* Constructor - dct = dict() */
struct pydict * pydict_new() {
    struct pydict *p = malloc(sizeof(*p));
    p->head = NULL;
    p->tail = NULL;
    p->count = 0;
    return p;
}

/* Destructor - del(dct) */
void pydict_del(struct pydict* self) {
    struct dnode *cur, *next;
    cur = self->head;
    while(cur) {
        free(cur->key);
        free(cur->value);
        next = cur->next;
        free(cur);
        cur = next;
    }
    free((void *)self);
}

int main(void)
{
    struct dnode * cur;
    struct pydict * dct = pydict_new();

    setvbuf(stdout, NULL, _IONBF, 0);  /* Internal */

    pydict_put(dct, "z", "Catch phrase");
    pydict_print(dct);
    pydict_put(dct, "z", "W");
    pydict_print(dct);
    pydict_put(dct, "y", "B");
    pydict_put(dct, "c", "C");
    pydict_put(dct, "a", "D");
    pydict_print(dct);
    printf("Length =%d\n",pydict_len(dct));

    printf("z=%s\n", pydict_get(dct, "z"));
    printf("x=%s\n", pydict_get(dct, "x"));

    printf("\nDump\n");
    for(cur = dct->head; cur != NULL ; cur = cur->next ) {
        printf("%s=%s\n", cur->key, cur->value);
    }

    pydict_del(dct);
}

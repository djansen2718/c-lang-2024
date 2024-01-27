#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 10

struct lnode
{                     /* a line of text*/
  char *text;         /* points to the text*/
  struct lnode *prev; /* previous line*/
  struct lnode *next; /* next line*/
};

void print_lnode(ln) struct lnode *ln;
{
  printf("--begin lnode--\n");
  // printf("text: %s\n", ln);
  // printf("prev: %s\n", ln->prev->text);
  // printf("next: %s\n", ln->next->text);
  printf("--end lnode--\n\n");
}

int main() /* prints lines in reverse */
{
  struct lnode *head = NULL;
  struct lnode *tail = NULL;
  struct lnode *current;
  char line[MAXLINE];

  while (fgets(line, MAXLINE, stdin) != NULL)
  {
    char *save = (char *)malloc(strlen(line) + 1);
    strcpy(save, line);
    printf("save: %s", save);

    struct lnode *new = (struct lnode *)malloc(sizeof(struct lnode));
    new->text = save;
    new->next = NULL;
    new->prev = tail;

    if (head == NULL)
    {
      printf("head = new\n");
      head = new;
    }
    if (tail != NULL)
    {
      // printf("tail->next = new\n");
      tail->next = new;
    }
    // printf("tail = new\n");
    tail = new;

    // print_lnode(current);
    // print_lnode(tail);
    // print_lnode(head);
  }
  for (current = tail; current != NULL; current = current->prev)
    printf("%s", current->text);
}
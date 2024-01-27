#include <stdio.h>
#include <stdlib.h>

int main()
{
  struct lnode
  {
    char *text;
    struct lnode *next;
  };

  struct lnode *head;
  struct lnode *tail;

  while (fgets(line, MAXLINE, stdin) != NULL)
  {
    char *save = (char *)malloc(strlen(line) + 1);
    strcpy(save, line);
    struct lnode *new = (struct lnode *)malloc(sizeof(struct lnode));
    if (tail != NULL)
      tail->next = new;
    new->text = save;
    new->next = NULL;
    tail = new;

    if (head == NULL)
      head = new;
  }
}
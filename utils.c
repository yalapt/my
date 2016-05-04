#include "libmy.h"
#include "utils.h"
#include "functions.h"

void add_func_to_list(t_list **list, char *(*func)(char *, char *))
{
  t_list *add;
  t_list *tmp;

  add = malloc(sizeof(t_list));
  add->func = &(*func);
  add->next = NULL;

  tmp = *list;

  while (tmp != NULL)
  {
    tmp = tmp->next;
  }
  tmp = add;
}

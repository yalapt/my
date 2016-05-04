#include "libmy.h"
#include "utils.h"
#include "functions.h"

void add_functions(t_list **list)
{
  t_list *tmp;

  tmp = *list;
  add_func_to_list(&tmp, &func_s);
}

char *format(t_list **list, char *input, char *output)
{
  t_list *tmp;
  char *formated;

  tmp = *list;
  formated = input;

  while (tmp != NULL)
  {
  my_putstr("aaa");
    formated = tmp->func(formated, output);
    tmp = tmp->next;
  }

  return (formated);
}

int my_printf(char *input, char *output)
{
  t_list *list;
  char *formated;
  
  list = malloc(sizeof(t_list));
  add_functions(&list);
  formated = format(&list, input, output);
  my_putstr(formated);
  return (0);
}

int main()
{
  my_printf("2 - %s\n", "une autre chaine");
  return (0);
}

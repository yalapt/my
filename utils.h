#ifndef __UTILS__
#define __UTILS__

typedef struct s_list
{
  char *(*func)(char *, char *);
  struct s_list *next;
} t_list;

void add_func_to_list(t_list **list, char *(*func)(char *, char *));

#endif

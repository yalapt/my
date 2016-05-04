#include "libmy.h"
#include "utils.h"
#include "functions.h"

/*

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

*/

void my_printf(char *pattern, ...){
	
	int i;
	int length;
	
	va_list list;
	va_start(list, pattern);
	
	i = 0;
	length = my_strlen(pattern);
		
	for (i = 0; i < length; i++) {
		if (pattern[i] == '%') {
			i++;
			switch (pattern[i]) {
				case 'c' :
					my_putchar((char) va_arg(list, void));
					break;
				case 's' :
					my_putstr((char*) va_arg(list, void));
					break;
				case 'i' :
					my_put_nbr((int) va_arg(list, void));
					break;
				case 'd' :
					my_put_nbr((int) va_arg(list, void));
					break;
				case 'f' :
					my_put_nbr((float) va_arg(list, void));
					break;
				case 'e' :
					my_put_nbr((double) va_arg(list, void));
					break;
				case '%' :
					my_putchar('%');
					break;
			}
		}
		else{
			my_putchar(pattern[i]);
		}
	}
	va_end(list);
}

int main()
{
  my_printf("2 - %s\n", "une autre chaine");
  return (0);
}

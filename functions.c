#include "libmy.h"

char *func_s(char *input, char *output)
{
  char *formated;
  my_putstr("you will segfault");
  formated = malloc((my_strlen(input) + my_strlen(output)) * sizeof(char));
  formated[0] = '\0';
  formated = my_strcat(formated, input);
  formated = my_strcat(formated, output);
	
	my_putstr("tototo");
  return (formated);
}

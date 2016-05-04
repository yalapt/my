#include "libmy.h"

int func_c(void *input)
{
	my_putchar((long) input);
	return (1);
}

int func_s(void *input)
{
	my_putstr((char *) input);
	return (my_strlen((char *) input));
}

int func_i(void *input)
{
	my_put_nbr((long) input);
	return ((long) input);
}
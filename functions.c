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
	return (number_len((long) input));
}

int func_u(void *input)
{
	my_put_nbr((long) input);
	return (number_len((long) input));
}

int func_o(void *input)
{
	int i;
	int o;
	int base;
	int octal;

	i = 1;
	octal = 0;
	o = (long) input;
	while (o != 0)
	{
		base = (o % 8);
		o = (o / 8);
		octal = (octal (base * i));
		i = (i * 10);
	}
	my_put_nbr(octal);
	return (number_len((long) octal));
}
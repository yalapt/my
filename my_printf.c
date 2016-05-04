#include "libmy.h"
#include "functions.h"

int number_len(int i)
{
	if (i < 10)
		return (1);
	else
		return (my_numlen(i / 10) + 1);
}

int check_char(char c)
{
	int i;
	int valid;
	char *chars;
	
	i = valid = 0;
	chars = "csiduo";
	while (chars[i] != '\0')
	{
		if (c == chars[i])
			valid = 1;
		i++;
	}
	return valid;
}

int my_printf(char *pattern, ...){
	int i;
	int length;
	int (*funcs[150]) (void *input);

	va_list list;
	va_start(list, pattern);

	funcs['c'] = &func_c;
	funcs['s'] = &func_s;
	funcs['i'] = &func_i;
	funcs['d'] = &func_i;
	funcs['u'] = &func_u;
	funcs['o'] = &func_o;

	i = 0;
	length = my_strlen(pattern);
	for (i = 0; i < length; i++)
	{
		if (pattern[i] == '%')
		{
			i++;	
			if (check_char(pattern[i]) == 1)
				funcs[(int) pattern[i]](va_arg(list, void *));
			else
				my_putchar(pattern[i]);
		}
		else
			my_putchar(pattern[i]);
	}
	va_end(list);
	return (0);
}

int main()
{
	my_printf("1 - une chaine\n");
	my_printf("2 - %s\n", "une autre chaine");
	my_printf("3 - %i\n", 42);
	my_printf("4 - %s %d %s%c", "avec", 4, "parametres", '\n');
	
	my_printf("1 - %o\n", 42);
	my_printf("2 - %u\n", 4200000000);
	my_printf("5 - %d%%\n", 42);
	
	return (0);
}
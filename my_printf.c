#include "libmy.h"
#include "functions.h"

int check_char(char c)
{
	int i;
	int valid;
	char *chars;
	
	i = valid = 0;
	chars = "csid";
	while (chars[i] != '\0')
	{
		if (c == chars[i])
		{
			valid = 1;
		}	
	}
	return valid;
}

char **functions()
{
	char **funcs;

	funcs = malloc(sizeof(funcs) / sizeof(*char));
	funcs['c'] = &func_c;
	funcs['s'] = &func_s;
	funcs['i'] = &func_i;
	funcs['d'] = &func_i;
	return funcs;
}

int my_printf(char *pattern, ...){
	int i;
	int length;
	char **funcs;
	
	va_list list;
	va_start(list, pattern);
	
	i = 0;
	length = my_strlen(pattern);
	funcs = functions();	
	for (i = 0; i < length; i++)
	{
		if (pattern[i] == '%')
		{
			i++;	
			if (check_char(pattern[i]) == i)
			{
				funcs[pattern[i]](va_arg(list, void*));
			}
			else
			{
				funcs['c'](pattern[i]);
			}
		}
		else{
			funcs['c'](pattern[i]);
		}
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
	return (0);
}

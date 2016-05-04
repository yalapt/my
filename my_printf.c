#include "libmy.h"
#include "functions.h"

int (*myprintfuncs[150]) (void *input);

myprintfuncs['c'] = &func_c;
myprintfuncs['s'] = &func_s;
myprintfuncs['i'] = &func_i;
myprintfuncs['d'] = &func_i;

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

int my_printf(char *pattern, ...){
	int i;
	int length;

	va_list list;
	va_start(list, pattern);

	i = 0;
	length = my_strlen(pattern);
	for (i = 0; i < length; i++)
	{
		if (pattern[i] == '%')
		{
			i++;	
			if (check_char(pattern[i]) == 1)
			{
				myprintfuncs[pattern[i]](va_arg(list, void *));
			}
			else
			{
				myprintfuncs['c'](pattern[i]);
			}
		}
		else{
			myprintfuncs['c'](pattern[i]);
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

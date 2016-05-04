/*
** my_str_to_wordtab.c for  in /home/yalap_t/Jour07/yalap_t/my_str_to_wordtab
** 
** Made by YALAP Thomas
** Login   <yalap_t@etna-alternance.net>
** 
** Started on  Tue Apr  7 12:11:48 2015 YALAP Thomas
** Last update Thu Apr  9 11:37:36 2015 YALAP Thomas
*/

#include <stdlib.h>

int my_check_char(char c)
{
  int t;
  t = 0;
  if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    t = 1;
  else if (c >= 48 && c <= 57)
    t = 1;
  return (t);
}

int my_stringlen(char *str)
{
  int i;
  i = 0;
  while (*str != '\0')
  {
    if (my_check_char(*str) == 1)
      i = i + 1;
    if (my_check_char(*str) == 0)
      return (i);
    str = str + 1;
  }
  return (i);
}

int my_tlen(char *str)
{
  int w;
  int i;
  w = (i = 0);
  while (*str != '\0')
  {
    if (my_check_char(*str) == 1)
      w = 1;
    if (my_check_char(*str) == 0 && w == 1)
      i = i + 1 + (w = 0);
    str = str + 1;
    if (*str == '\0' && w == 1)
      i = i + 1;
  }
  return (i);
}

char **my_mallocate(char *str)
{
  int w;
  int i;
  int c;
  char **tab;
  w = (i = 0);
  c = my_tlen(str) + 1;
  tab = malloc(c * sizeof(char*));
  tab[c - 1] = NULL;
  while (*str != '\0')
  {
    if (my_check_char(*str) == 1 && w == 0)
    {
      c = my_stringlen(str) + 1;
      tab[i] = malloc(c * sizeof(char));
      tab[i][c - 1] = '\0';
      i = i + (w = 1);
    }
    if (my_check_char(*str) == 0)
      w = 0;
    str = str + 1;
  }
  return (tab);
}

char **my_str_to_wordtab(char *str)
{
  int w;
  int c;
  int i;
  int ii;
  char **tab;
  w = (c = (i = 0));
  tab = my_mallocate(str);
  while (*str != '\0')
  {
    ii = 0;
    if (my_check_char(*str) == 1 && w == 0)
    {
      c = my_stringlen(str);
      while (c > 0)
      {
	tab[i][ii] = *str;
	c = c - 1 + ((ii = ii + 1) % -1);
	str = str + 1;
      }
      i = i + (w = 1);
    }
    if (my_check_char(*str) == 0 && *str != '\0')
      str = str + 1 + (w = 0);
  }
  return (tab);
}

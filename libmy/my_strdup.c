/*
** my_strdup.c for  in /home/yalap_t/Jour07/yalap_t/my_strdup
** 
** Made by YALAP Thomas
** Login   <yalap_t@etna-alternance.net>
** 
** Started on  Tue Apr  7 11:20:27 2015 YALAP Thomas
** Last update Thu Apr  9 09:27:03 2015 YALAP Thomas
*/

#include <stdlib.h>

int my_sl(char *str)
{
  int i;

  i = 0;
  while (*str != '\0')
  {
    str = str + 1;
    i++;
  }
  return (i);
}

char *my_cpy(char *dest, char *src)
{
  int i;

  i = 0;
  while (src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (dest);
}

char *my_strdup(char *str)
{
  char *new_str;
  int m;

  m = my_sl(str) + 1;
  new_str = malloc(m * sizeof(*new_str));
  new_str = my_cpy(new_str, str);
  return (new_str);
}

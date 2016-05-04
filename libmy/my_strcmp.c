/*
** my_strcmp.c for  in /home/yalap_t/Jour04/yalap_t/my_strcmp
** 
** Made by YALAP Thomas
** Login   <yalap_t@etna-alternance.net>
** 
** Started on  Mon Apr  6 11:55:40 2015 YALAP Thomas
** Last update Mon Apr  6 14:18:48 2015 YALAP Thomas
*/

int my_strcmp(char *s1, char *s2)
{
  int i;

  i = 0;
  while (*s1 != '\0' || *s2 != '\0')
  {
    if (*s1 < *s2 && i == 0)
      i = -1;
    if (*s1 > *s2 && i == 0)
      i = 1;
    s1 = s1 + 1;
    s2 = s2 + 1;
    if (*s1 == '\0' && *s2 != '\0' && i == 0)
      i = -1;
    if (*s1 != '\0' && *s2 == '\0' && i == 0)
      i = 1;
  }
  return (i);
}

/*
** my_strncmp.c for  in /home/yalap_t/Jour04/yalap_t/my_strncmp
** 
** Made by YALAP Thomas
** Login   <yalap_t@etna-alternance.net>
** 
** Started on  Mon Apr  6 12:39:08 2015 YALAP Thomas
** Last update Mon Apr  6 14:18:03 2015 YALAP Thomas
*/

int my_strncmp(char *s1, char *s2, int n)
{
  int i;

  i = 0;
  while (n > 0 && (*s1 != '\0' || *s2 != '\0'))
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
    n--;
  }
  return (i);
}

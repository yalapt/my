/*
** my_strncpy.c for  in /home/yalap_t/Jour04/yalap_t/my_strncpy
** 
** Made by YALAP Thomas
** Login   <yalap_t@etna-alternance.net>
** 
** Started on  Mon Apr  6 11:08:20 2015 YALAP Thomas
** Last update Wed Apr  8 15:24:39 2015 YALAP Thomas
*/

char *my_strncpy(char *dest, char *src, int n)
{
  int i;
  int ii;

  i = (ii = 0);
  while (n > 0)
  {
    dest[i] = src[ii];
    if (src[ii] != '\0')
      ii++;
    else
      dest[i] = '\0';
    i++;
    n--;
  }
  return (dest);
}

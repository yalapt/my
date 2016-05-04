/*
** my_strcpy.c for  in /home/yalap_t/main
** 
** Made by YALAP Thomas
** Login   <yalap_t@etna-alternance.net>
** 
** Started on  Mon Apr  6 10:40:26 2015 YALAP Thomas
** Last update Wed Apr  8 12:59:17 2015 YALAP Thomas
*/

char *my_strcpy(char *dest, char *src)
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

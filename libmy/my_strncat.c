/*
** my_strncat.c for  in /home/yalap_t/Jour04/yalap_t/my_strncat
** 
** Made by YALAP Thomas
** Login   <yalap_t@etna-alternance.net>
** 
** Started on  Mon Apr  6 13:14:31 2015 YALAP Thomas
** Last update Wed Apr  8 15:21:33 2015 YALAP Thomas
*/

char *my_strncat(char *str1, char *str2, int n)
{
  int i;
  int ii;

  i = (ii = 0);
  while (n > 0)
  {
    if (str1[i] == '\0')
    {
      str1[i] = str2[ii];
      ii++;
      n--;
    }
    i++;
    if (n == 0)
      str1[i] = '\0';
  }
  return (str1);
}

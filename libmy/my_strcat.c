/*
** my_strcat.c for  in /home/yalap_t/Jour04/yalap_t/my_strcat
** 
** Made by YALAP Thomas
** Login   <yalap_t@etna-alternance.net>
** 
** Started on  Mon Apr  6 12:55:50 2015 YALAP Thomas
** Last update Tue Apr  7 19:56:25 2015 YALAP Thomas
*/

char *my_strcat(char *str1, char *str2)
{
  int i;
  int ii;

  i = (ii = 0);
  while (str2[ii] != '\0')
  {
    if (str1[i] == '\0')
    {
      str1[i] = str2[ii];
      ii++;
    }
    i++;
  }
  str1[i] = '\0';
  return (str1);
}

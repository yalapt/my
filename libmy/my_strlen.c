/*
** my_strlen.c for  in /home/yalap_t/Jour03/yalap_t/my_strlen
** 
** Made by YALAP Thomas
** Login   <yalap_t@etna-alternance.net>
** 
** Started on  Fri Apr  3 09:48:57 2015 YALAP Thomas
** Last update Fri Apr  3 09:53:53 2015 YALAP Thomas
*/

int my_strlen(char *str)
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

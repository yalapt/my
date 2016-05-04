/*
** my_putstr.c for  in /home/yalap_t/Jour03/yalap_t/my_putstr
** 
** Made by YALAP Thomas
** Login   <yalap_t@etna-alternance.net>
** 
** Started on  Fri Apr  3 09:05:05 2015 YALAP Thomas
** Last update Wed Apr  8 11:00:58 2015 YALAP Thomas
*/

void my_putchar(char c);

void my_putstr(char *str)
{
  while (*str != '\0')
  {
    my_putchar(*str);
    str = str + 1;
  }
}

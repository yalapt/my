/*
** my_putchar.c for  in /home/yalap_t/Jour01/my_putchar
** 
** Made by YALAP Thomas
** Login   <yalap_t@etna-alternance.net>
** 
** Started on  Wed Apr  1 15:45:41 2015 YALAP Thomas
** Last update Wed Apr  1 15:47:29 2015 YALAP Thomas
*/

#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

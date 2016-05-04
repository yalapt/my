/*
** my_swap.c for  in /home/yalap_t/Jour03/yalap_t/my_swap
** 
** Made by YALAP Thomas
** Login   <yalap_t@etna-alternance.net>
** 
** Started on  Fri Apr  3 10:53:10 2015 YALAP Thomas
** Last update Fri Apr  3 14:11:52 2015 YALAP Thomas
*/

void my_swap(int *a, int *b)
{
  int i;

  i = *a;
  *a = *b;
  *b = i;
}

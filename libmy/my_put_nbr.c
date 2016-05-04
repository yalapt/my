/*
** my_put_nbr.c for  in /home/yalap_t/Jour05/yalap_t/my_put_nbr
** 
** Made by YALAP Thomas
** Login   <yalap_t@etna-alternance.net>
** 
** Started on  Sat Apr  4 09:05:30 2015 YALAP Thomas
** Last update Wed Apr  8 14:07:46 2015 YALAP Thomas
*/

void my_putchar(char c);

int pos_or_neg(int n)
{
  if (n < 0)
  {
    my_putchar('-');
    if (n == -2147483648)
      n = n + 1;
    n = n * - 1;
  }
  return (n);
}

int nbrlen(int n)
{
  int i;

  i = 1;
  while (n >= 10)
  {
    n = n / 10;
    i++;
  }
  return (i);
}

void aff_nbr(char *str)
{
  while (*str != '\0')
  {
    my_putchar(*str);
    str = str + 1;
  }
}

void my_put_nbr(int n)
{
  int i;
  int c;
  int l;
  int s;
  char str[12];

  i = pos_or_neg(n);
  s = (l = nbrlen(i));
  str[l] = '\0';
  while (i > 0)
  {
    c = i % 10;
    i = i / 10;
    str[l - 1] = c + 48;
    l--;
  }
  if (n == 0)
    str[s - 1] = 48;
  if (n == -2147483648)
    str[s - 1] = 56;
  aff_nbr(str);
}

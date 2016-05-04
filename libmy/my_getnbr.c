/*
** my_getnbr.c for  in /home/yalap_t/Jour05/yalap_t/my_getnbr
** 
** Made by YALAP Thomas
** Login   <yalap_t@etna-alternance.net>
** 
** Started on  Sat Apr  4 12:05:18 2015 YALAP Thomas
** Last update Sat Apr  4 13:50:24 2015 YALAP Thomas
*/

int check_nbr(char str)
{
  if (str >= 48 && str <= 57)
    return (1);
  else if (str == 43)
    return (2);
  else if (str == 45)
    return (3);
  return (0);
}

int calc(int nbr, char c)
{
  if (nbr == 0)
  {
    if (c != 48)
    {
      c = c - 48;
      nbr = c;
    }
  }
  else
  {
    c = c - 48;
    nbr = nbr * 10;
    nbr = nbr + c;
  }
  return (nbr);
}

int my_getnbr(char *str)
{
  int nbr;
  int i;
  int c;

  nbr = 0;
  i = 1;
  while (*str != '\0')
  {
    c = check_nbr(*str);
    if (c == 0)
      return (nbr * i);
    else if (nbr != 0 && (c == 2 || c == 3))
      return (nbr * i);
    else if (nbr == 0 && c == 3)
      i = i * -1;
    else if (c == 1)
      nbr = calc(nbr, *str);
    str = str + 1;
  }
  return (nbr * i);
}

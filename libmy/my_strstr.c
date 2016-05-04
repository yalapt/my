/*
** my_strstr.c for  in /home/yalap_t/Jour04/yalap_t/my_strstr
** 
** Made by YALAP Thomas
** Login   <yalap_t@etna-alternance.net>
** 
** Started on  Wed Apr  8 10:51:01 2015 YALAP Thomas
** Last update Wed Apr  8 12:55:02 2015 YALAP Thomas
*/

int strl(char *str)
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

int checkstr(char *str, char *to_find)
{
  int a;
  int i;
  int ii;
  a = (i = (ii = 0)) - 1;
  while (str[i] != '\0')
  {
    if (str[i] == to_find[ii])
    {
      ii = (a = i) * 0;
      while (to_find[ii] != '\0')
      {
      	if (str[i] != to_find[ii])
      	{
      	  i = a;
      	  a = -1;
      	  break;
      	}
      	i++;
      	ii++;
      }
    }
    i++;
  }
  return (a);
}

char *my_strstr(char *str, char *to_find)
{
  int s;
  int c;
  int a;
  char *null = "null";
  char *empty = "";
  s = strl(str);
  c = strl(to_find);
  a = checkstr(str, to_find);
  if (c == 0 && s == 0)
    return (empty);
  if (c == 0 && s != 0)
    return (&str[0]);
  if (a == -1)
    return (null);
  return (&str[a]);
}

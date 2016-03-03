/*
** my_check.c for my_check.c in /home/vatout_a/rendu/CPE_2015_Allum1
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Fri Feb 12 14:06:47 2016 Vatoutine
** Last update	Fri Feb 26 17:17:30 2016 Vatoutine Artem
*/

#include "funk.h"
#include "my.h"

int	my_check_valid(char *src)
{
  int	inc;

  if (src == NULL)
    return (-3);
  inc = 0;
  if (my_strlen(src) == 0)
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      return (-1);
    }
  while (src[inc] != '\0')
    {
      if ((src[inc] >= 48 && src[inc] <= 57)
	  || src[inc] == '\n')
        inc++;
      else
        {
          my_putstr("Error: invalid input (positive number expected)\n");
          return (-1);
        }
    }
  return (my_getnbr(src));
}

int	my_board_check_match(char *src, int *matches, int line)
{
  int	match;

  if ((match = my_check_valid(src)) == -1)
    return (-1);
  else if (match == -3)
    return (-3);
  if (match == 0)
    {
      my_putstr("Error: you have to remove at least one match\n");
      return (-1);
    }
  if (matches[line - 1] < match)
    {
      my_putstr("Error: not enough matches on this line\n");
      return (-1);
    }
  return (match);
}

int	my_board_check_line(char *src, int *matches)
{
  int	line;

  if ((line = my_check_valid(src)) == -1)
    return (-1);
  if (line == -3)
    return (-3);
  if (line > 4 || line < 1)
    {
      my_putstr("Error: this line is out of range\n");
      return (-1);
    }
  if (matches[line - 1] <= 0)
    {
      my_putstr("Error: this line is empty\n");
      return (-1);
    }
  return (line);
}

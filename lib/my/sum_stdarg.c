/*
** sum_stdarg.c for sum_stdarg.c in /home/vatout_a/lib/my
**
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
**
** Started on  Sun Nov 15 15:05:07 2015 Vatoutine Artem
** Last update	Wed Feb 10 18:25:49 2016 Vatoutine Artem
*/

#include <stdarg.h>
#include "my.h"

int	sum_stdarg(int i, int nb, ...)
{
  va_list	ap;
  int		z;

  z = 0;
  va_start(ap, nb);
  if (i == 0)
    while (nb > 0)
      {
	z = va_arg(ap, int) + z;
	nb = nb - 1;
      }
  if (i == 1)
    while (nb > 0)
      {
	z = my_strlen(va_arg(ap, char *)) + z;
	nb = nb - 1;
      }
  va_end(ap);
  return (z);
}

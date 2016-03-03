/*
** my_putchar.c for my_putchar.c in /home/vatout_a/lib/my
**
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
**
** Started on  Sun Nov 15 14:50:21 2015 Vatoutine Artem
** Last update	Wed Feb 10 18:22:50 2016 Vatoutine Artem
*/

#include <unistd.h>

int	my_putchar(char c)
{
  if ((write(1, &c, 1)) == -1)
    return (0);
  return (0);
}

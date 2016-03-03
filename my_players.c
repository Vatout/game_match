/*
** my_players.c for my_players.c in /home/vatout_a/rendu/CPE_2015_Allum1
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Thu Feb 18 14:08:42 2016 Vatoutine
** Last update	Fri Feb 26 17:18:34 2016 Vatoutine Artem
*/

#include "funk.h"
#include "my.h"

int	my_rand(int c)
{
  int	a;
  int	b;

  a = 1;
  b = c;
  return (rand()%(b-a) + a);
}

int	my_while_player(char **board, int *matches, int line, int match)
{
  my_putstr("Line: ");
  if ((line = my_board_check_line((get_next_line(0)), matches)) >= 0)
    {
      my_putstr("Matches: ");
      if ((match = my_board_check_match((get_next_line(0)), matches, line))
	  == -3)
        return (-3);
      else if (match <= 0)
        return (-1);
      my_printf("Player removed %d match(es) from line %d\n", match, line);
      my_board_update(board, matches, line, match);
      my_board_print(board, 5);
      if (matches[4] == 0)
        return (-2);
      my_putchar('\n');
    }
  else if (line == -3 || match == -3)
    return (-3);
  else
    return (-1);
  return (0);
}

int	my_while_IA(char **board, int *matches, int line, int match)
{
  line = my_rand(4);
  match = my_rand(7);
  if (matches[4] == 0)
    return (-2);
  while (match > (matches[line - 1]) || match <= 0 || line <= 0)
    {
      line = my_rand(4);
      match = my_rand(7);
    }
  my_printf("AI removed %d match(es) from line %d\n", match, line);
  my_board_update(board, matches, line, match);
  my_board_print(board, 5);
  if (matches[4] == 0)
    return (-2);
  return (0);
}

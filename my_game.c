/*
** my_game.c for my_game.c in /home/vatout_a/rendu/CPE_2015_Allum1
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Wed Feb 10 12:53:34 2016 Vatoutine
** Last update	Fri Feb 26 17:22:33 2016 Vatoutine Artem
*/

#include "funk.h"
#include "my.h"

int	my_while_game_player(char **board, int *matches, int line, int match)
{
  if ((line = my_while_player(board, matches, line, match)) == (-2))
    {
      my_putstr("You lost, too bad..\n");
      return (-1);
    }
  if (line == -3)
    return (-3);
  if (line != -1)
    return (1);
  return (0);
}

int	my_while_game_IA(char **board, int *matches, int line, int match)
{
  if ((match = (my_while_IA(board, matches, line, match))) == (-2))
    {
      my_putstr("I lost.. snif.. but I’ll get you next time!!\n");
      return (-1);
    }
  if (match != -2)
    return (1);
  return (0);
}

int		my_while(char **board, int *matches, int line, int match)
{
  static int	turn = 1;
  int		res;

  res = 0;
  if ((turn % 2) == 1)
    {
      my_printf("\nYour turn:\n");
      while ((turn %2) == 1)
	{
	  if ((res = my_while_game_player(board, matches, line, match)) < 0)
	    return (0);
	  if (res == 1)
	    turn++;
	}
    }
  else if (turn % 2 == 0)
    {
      my_putstr("AI's turn...\n");
      if ((res = my_while_game_IA(board, matches, line, match)) < 0)
	return (0);
      if (res == 1)
	turn++;
    }
  return (-1);
}

char		**my_game(char **board, int *matches)
{
  static int	game = 1;
  int		line;
  int		match;

  line = 0;
  match = 0;
  while (game == 1)
    if (my_while(board, matches, line, match) == 0)
      game++;
  return (NULL);
}

char	**my_board_update(char **board, int *matches, int lines, int nb_matches)
{
  int	inc;

  inc = 10;
  while (inc > 0 && nb_matches != 0)
    {
      if (board[lines][inc] == '|')
	{
	  board[lines][inc] = 32;
          matches[lines - 1]--;
          nb_matches--;
	}
      inc--;
    }
  my_tab_fill(matches, board);
  return (board);
}

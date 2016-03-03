/*
** my_struct.c for my_struct.c in /home/vatout_a/rendu/CPE_2015_Allum1
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Fri Feb 12 11:27:52 2016 Vatoutine
** Last update	Mon Feb 15 10:53:32 2016 Vatoutine Artem
*/

#include "funk.h"
#include "my.h"

int	my_board_length(char *board_line)
{
  int	inc;
  int	cmp;

  inc = 0;
  cmp = 0;
  while (board_line[inc] != '\n')
    {
      if (board_line[inc] == '|')
        cmp++;
      inc++;
    }
  return (cmp);
}

int	*my_tab_fill(int *matches, char **board)
{
  int	inc;

  inc = 1;
  matches[0] = my_board_length(board[inc++]);
  matches[1] = my_board_length(board[inc++]);
  matches[2] = my_board_length(board[inc++]);
  matches[3] = my_board_length(board[inc++]);
  matches[4] = matches[0] + matches[1] + matches[2] + matches[3];
  return (matches);
}

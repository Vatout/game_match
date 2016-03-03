/*
** my_board.c for my_board.c in /home/vatout_a/rendu/CPE_2015_Allum1
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Tue Feb  9 16:10:13 2016 Vatoutine
** Last update	Fri Feb 12 14:07:32 2016 Vatoutine Artem
*/

#include "funk.h"
#include "my.h"

char		**my_board_allum1(char **board, int matches, int inc, int z)
{
  static int	y = 1;
  int		x;

  if (y <= 4)
    {
      x = z;
      while (inc < matches)
	{
	  board[y][x] = '|';
	  x++;
	  inc++;
	}
      inc = 0;
      y++;
      z--;
      my_board_allum1(board, matches +=2, inc++, z);
    }
  return (board);
}

char	**my_board_fill(char **board, int lines, int cols)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  while (y <= lines)
    {
      while (x < cols)
	{
	  board[y][x] = 32;
	  board[0][x] = '*';
	  board[lines][x] = '*';
	  x++;
	}
      board[y][cols] = '\n';
      board[y][0] = '*';
      board[y][cols - 1] = '*';
      x = 0;
      y++;
    }
  my_board_allum1(board, 1, 0, 4);
  return (board);
}

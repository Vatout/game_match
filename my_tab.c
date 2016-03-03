/*
** my_tab.c for my_tab.c in /home/vatout_a/rendu/CPE_2015_Allum1
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Fri Feb 12 10:54:21 2016 Vatoutine
** Last update	Fri Feb 19 14:53:01 2016 Vatoutine Artem
*/

#include "my.h"
#include "funk.h"

void	my_board_free(char **board, int lines)
{
  int	inc;

  inc = 0;
  while (inc < lines + 1)
    {
      free(board[inc]);
      inc++;
    }
  free(board);
}

void	my_board_print(char **board, int lines)
{
  int	inc;

  inc = 0;
  while (inc < lines + 1)
    {
      my_putstr(board[inc]);
      inc++;
    }
}

char	**my_board_init(char **board, int lines, int cols)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  while (y < lines + 1)
    {
      while (x < cols + 2)
        {
          board[y][x] = '\0';
          x++;
        }
      x = 0;
      y++;
    }
  return (board);
}

char	**my_board_malloc(char **board, int lines, int cols)
{
  int	inc;

  inc = 0;
  if ((board = malloc(sizeof(char *) * (lines + 1))) == NULL)
    return (0);
  while (inc < lines + 1)
    if ((board[inc++] = malloc(sizeof(char) * (cols + 2))) == NULL)
      return (NULL);
  return (board);
}

/*
** main.c for main.c in /home/vatout_a/rendu/CPE_2015_allum1_bootstrap
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Tue Feb  9 14:11:35 2016 Vatoutine
** Last update	Thu Feb 18 14:40:38 2016 Vatoutine Artem
*/

#include "funk.h"
#include "my.h"

int	allum()
{
  int   lines;
  int   cols;
  char	**board;
  int   matches[5];

  lines = 5;
  cols = 9;
  board = NULL;
  board = my_board_malloc(board, lines, cols);
  board = my_board_init(board, lines, cols);
  board = my_board_fill(board, lines, cols);
  my_tab_fill(matches, board);
  my_board_print(board, lines);
  my_game(board, matches);
  my_board_free(board, lines);
  return (0);
}

int	main(int ac, char **av)
{
  (void)ac;
  (void)av;
  allum();
  return (0);
}

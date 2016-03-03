/*
** funk.h for funk.h in /home/vatout_a/taff/USP/my_select
**
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
**
** Started on  Wed Dec  2 12:21:11 2015 Vatoutine Artem
** Last update	Fri Feb 19 14:20:59 2016 Vatoutine Artem
*/

#ifndef FUNK_H_
# define FUNK_H_

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "get_next_line.h"

void	my_board_free(char **board, int lines);
void	my_board_print(char **board, int lines);
int  my_board_length(char *board_line);
int	*my_tab_fill(int *line, char **board);
int my_check_valid(char *src);
int my_board_check_line(char *src, int *matches);
int my_board_check_match(char *src, int *matches, int line);
int my_while_player(char **board, int *matches, int line, int match);
int my_while_IA(char **board, int *matches, int line, int match);
char	**my_board_fill(char **board, int lines, int cols);
char	**my_board_malloc(char **board, int lines, int cols);
char  **my_board_init(char **board, int lines, int cols);
char  **my_board_allum1(char **board, int matches, int inc, int z);
int my_board_check(char **board, int lines, int cols);
char  **my_game(char **board, int *matches);
char	**my_board_update(char **board, int *matches, int lines, int nb_matches);

#endif /* FUNK_H_ */

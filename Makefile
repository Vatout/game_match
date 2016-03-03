##
## Makefile for Makefile in /home/vatout_a/rendu/CPE_2015_Allum1
## 
## Made by Vatoutine
## Login   <vatout_a@epitech.net>
## 
## Started on  Tue Feb  9 16:02:51 2016 Vatoutine
## Last update Fri Feb 19 15:13:45 2016 Vatoutine
##

CC	=	gcc

LIB	=	-lmy -L./lib

CFLAGS	=	$(HEAD) -W -Wall -Wextra -ansi -pedantic

HEAD	=	-Iinclude

RM	=	rm -f

NAME	=	allum1

SRCS	=	allum1.c \
		my_int_tab.c \
		my_tab.c \
		my_board.c \
		my_check.c \
		my_game.c \
		my_players.c \
		get_next_line.c

OBJS	=	$(SRCS:.c=.o)

$(NAME):	$(OBJS)
	$(CC) $(OBJS) $(LIB) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re

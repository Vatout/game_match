##
## Makefile for Makefile in /home/vatout_a/rendu/Piscine_C_J10/lib/my
##
## Made by Vatoutine Artem
## Login   <vatout_a@epitech.net>
##
## Started on  Fri Oct  9 11:18:37 2015 Vatoutine Artem
## Last update Fri Feb 12 12:29:51 2016 Vatoutine
##

RM	= rm -f

LIBC	= ar rc

LIBR	= ranlib

INCLUDE	= -Iinclude

CP	= cp

NAME	= libmy.a

CFLAGS	= -Wall -Wextra

SRCS	= my_printf.c \
	  my_va_conv_putstr.c \
	  my_va_conv_adr.c \
	  my_va_conv_bin.c \
	  my_va_conv_hex.c \
	  my_va_conv_nbr.c \
	  my_strcpy.c \
	  my_strlen.c \
	  my_putchar.c \
	  my_put_nbr.c \
	  my_putstr.c \
	  my_getnbr.c

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)
	$(CP) $(NAME) ..

all:	$(NAME) clean

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

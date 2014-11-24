#Makefile for notsominishell
NAME = notsominishell
OBJ = $(SRC:.c=.o)
RM = rm -fv

all:
	cc -g -L../../lib -I../../include my_notsominishell.c -lmy -o $(NAME)

clean:
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.o
	-$(RM) *.core

fclean: clean
	-$(RM) $(NAME)

re: fclean all

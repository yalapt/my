CC =		gcc

NAME =		libmy.a

SRC =		my_putchar.c 	\
		my_isneg.c	\
		my_put_nbr.c 	\
		my_swap.c	\
		my_putstr.c 	\
		my_strlen.c 	\
		my_getnbr.c 	\
		my_strcpy.c 	\
		my_strncpy.c 	\
		my_strcmp.c 	\
		my_strncmp.c 	\
		my_strcat.c 	\
		my_strncat.c 	\
		my_strstr.c 	\
		my_strdup.c 	\
		my_str_to_wordtab.c

OBJ =		$(SRC:%.c=%.o)

CFLAGS =	-W -Wall -Werror -ansi -pedantic
AR =		ar r libmy.a *.o
RAN =		ranlib libmy.a

$(NAME):	$(OBJ)
		$(CC) -c *.c
		$(AR)
		$(RAN)

all:		$(NAME)

clean:		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

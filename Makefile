CC =		gcc

NAME =		myprintf

SRC =		my_printf.c \
		functions.c \
		utils.c

OBJ =		$(SRC:%.c=%.o)

CFLAGS =	-W -Wall -Werror -ansi -pedantic

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) -lmy -Llibmy

all:		$(NAME)

clean:		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re: 		fclean all

NAME	=	libftprintf.a

SRC		=	$(wildcard src/*.c)

OBJ		=	$(patsubst src/%.c, obj/%.o, $(SRC))

CFLAGS	=	-Wall -Werror -Wextra -c -o
CC		=	gcc
LIB		=	ar -rcs
RM		=	rm -rf

obj/%.o:	src/%.c
	@$(CC) $(CFLAGS) $@ $<
all:	$(NAME)
$(NAME):	$(OBJ)
	@$(LIB) $(NAME) $(OBJ) 
clean:
	@$(RM) $(OBJ) obj/

fclean: clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re

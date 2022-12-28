NAME		=	libftprintf.a

CFLAGS	=	-Wall -Werror -Wextra -c
CC		=	gcc
LIB		=	ar -rcs
RM		=	rm -rf

SRC_DIR		=	src
SRC_B_DIR	=	src_bonus/
OBJ_DIR		=	obj
OBJ_B_DIR	=	obj_bonus/

SRC			=	$(wildcard $(SRC_DIR)/*.c)
OBJ			=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))
SRC_B		=	$(wildcard $(SRC_B_DIR)/*.c)
OBJ_B		=	$(patsubst $(SRC_B_DIR)/%.c, $(OBJ_B_DIR)/%.o, $(SRC_B))

#	We don't actually need any compilation command. Because Make has		
#	built-in rules to compile to compile .o files from .c files, when		
#	specific definitions have been made (CC, CFLAGS etc.). But I wanted		
#	to add a rule for creating directories for each src, and couldn't find	
#	required information to do anyway else, so...

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c objects
	@$(CC) $(CFLAGS) -o $@ $<

$(OBJ_B_DIR)/%.o:	$(SRC_B_DIR)/%.c bonus_objects
	@$(CC) $(CFLAGS) -o $@ $<

all:	$(NAME)

#Creating directories for ".o" files#
objects:
	@mkdir -p obj
bonus_objects:
	@mkdir -p obj_bonus

$(NAME):	$(OBJ)
	@$(LIB) $(NAME) $(OBJ) 

clean:
	@$(RM) $(OBJ_DIR) $(OBJ_B_DIR)

bonus: $(OBJ_B)
	@$(LIB) $(NAME) $(OBJ_B)

fclean: clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re objects bonus_objects

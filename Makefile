NAME = lem-in
CFILES = backtrack.c checks.c cycle.c dijkstra.c flow.c free.c free_lemin.c\
	  get_node.c init_ants.c init_edges.c init_lemin.c init_node.c main.c\
	  misc.c new_path.c print.c read.c utils.c step.c realloc.c


SRC_DIR = src/
INC_DIR = inc/
SRC = $(addprefix $(SRC_DIR), $(CFILES))
FLAGS = -Wall -Wextra -Werror
LIB_DIR = libft/
LIB_H = -I $(LIB_DIR)inc/
LIBFT = $(LIB_DIR)libft.a
HDR = $(INC_DIR)head.h

all: $(NAME)

$(NAME): $(LIBFT) $(SRC) $(HDR)
	@gcc -o $(NAME) $(FLAGS) $(SRC) -I $(INC_DIR) $(LIB_H) $(LIBFT) 

$(LIBFT):
	@make -C $(LIB_DIR)

clean:
	@make clean -C  $(LIB_DIR)

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C libft

re: fclean all

.PHONY: all, re, clean, fclean

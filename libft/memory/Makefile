# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 22:04:09 by alvachon          #+#    #+#              #
#    Updated: 2022/10/10 18:05:25 by alvachon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = memory.a
FLAGS = -Wall -Wextra -Werror

SRC = $(ACTIONMEM_C) $(MEMPOINT_C)
OBJ_DIR = _objFiles
OBJ = *.o

# 1. (2) MEMMOVE, MEMCHR
ACTIONMEM_C = srcs/action_by_mem_2.c
# 2. (3) MEMESET, CALLOC, BZERO
MEMPOINT_C = srcs/heap_alloc_3.c

# COLORS
NONE='\033[0m'
GRAY='\033[2;37m'
CURSIVE='\033[3m'

# RULES
all : $(NAME)

$(NAME): $(OBJ)
	@echo $(CURSIVE)$(GRAY)"      - Generating $(NAME)"$(NONE)
	@ar rc $(NAME) $(OBJ_DIR)/$(OBJ)

$(OBJ): $(SRC)
	@gcc $(FLAGS) -c $(SRC)
	@mkdir -p $(OBJ_DIR)
	@mv $(OBJ) $(OBJ_DIR)

clean:
	@echo $(CURSIVE)$(GRAY) "     - Cleaning Libft..." $(NONE)
	@rm -f $(OBJ) $(OBJ_DIR)/$(OBJ)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo $(CURSIVE)$(GRAY) "     - Removing $(NAME)..." $(NONE)
	@rm -f $(NAME)

re: fclean all

norm:
	@echo "\n   Libft norminette..." $(GRAY)$(CURSIVE)
	@norminette $(SRC) *.h */*.h
	@echo ""$(NONE)
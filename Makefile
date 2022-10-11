# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 16:27:04 by alvachon          #+#    #+#              #
#    Updated: 2022/10/11 01:10:53 by alvachon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

# --- FLAGS ---
FLAGS = -Wall -Wextra -Werror

# LIBRARY
#LINKED_LIST_A = linkedlist.a
#LINKED_LIST_DIR = libft/linked_list

#MEMORY_A = memory.a
#MEMORY_DIR = libft/memory/

#NUMBER_A = nbr.a
#NUMBER_DIR = libft/number/

#STRING_A = string.a
#STRING_DIR = libft/string/

#TYPE_A = typemem.a
#TYPE_DIR = libft/type/

#WRITE_A = write.a
#WRITE_DIR = libft/write/

LISTDC_A = dcll.a
LISTDC_DIR = listdc/

# 
SRCS_DIR =
OBJ_DIR = _objFiles/

SRC =
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_SRC))

LIBFT = 	$(LINKED_LIST_DIR)/$(LINKED_LIST_A)\
			$(MEMORY_DIR)/$(MEMORY_A)\
			$(NUMBER_DIR)/$(NUMBER_A)\
			$(STRING_DIR)/$(STRING_A)\
			$(TYPE_DIR)/$(TYPE_A)\
			$(WRITE_DIR)/$(WRITE_A)

PUSHSWAP =	$(LISTDC_DIR)/$(LISTDC_A)

RED = '\[\033[0;31m\]'
GRAY='\033[2;37m'
NONE= '\033[0m'

all: $(NAME)

$(NAME): $(OBJ)
	@echo $(RED) "Incoming . . ." $(NONE)
#@make -C $(LINKED_LIST_DIR)
#@make -C $(MEMORY_DIR)
#@make -C $(NUMBER_DIR)
#@make -C $(STRING_DIR)
#@make -C $(TYPE_DIR)
#@make -C $(WRITE_DIR)
	@make -C $(LISTDC_DIR)
	@gcc $(FLAGS) $(PUSHSWAP) $(OBJ) -g3 -o $(NAME)
	@echo $(RED) ". . . Compilation all done." $(NONE)

$(OBJ): $(SRC)
	@echo $(GRAY) "Making Object Files . . ." $(NONE)
	@gcc $(FLAGS) -c $(SRC)
	@echo $(GRAY) "Moving Object Files to $(OBJ_DIR). . ." $(NONE)
	@mkdir -p $(OBJ_DIR)
	@mv $(OBJ_SRC) $(OBJ_DIR)

clean:
	@echo $(CURSIVE)$(GRAY) "     - Removing object files..." $(NONE)
	@rm -f $(OBJ)
	@rm -rf $(OBJ_DIR)
#@make -C $(LINKED_LIST_DIR) clean
#@make -C $(MEMORY_DIR) clean
#@make -C $(NUMBER_DIR) clean
#@make -C $(STRING_DIR) clean
#@make -C $(TYPE_DIR) clean
#@make -C $(WRITE_DIR) clean
	@make -C $(LISTDC_DIR) clean
	@echo "   - Clean"

fclean: clean
	@echo $(CURSIVE)$(GRAY) "     - Removing $(NAME)..." $(NONE)
	@rm -rf $(NAME)
#@make -C $(LINKED_LIST_DIR) fclean
#@make -C $(MEMORY_DIR) fclean
#@make -C $(NUMBER_DIR) fclean
#@make -C $(STRING_DIR) fclean
#@make -C $(TYPE_DIR) fclean
#@make -C $(WRITE_DIR) fclean
	@make -C $(LISTDC_DIR) fclean
	@echo "   - All clean"

re: fclean all

norm: $(SRC)
	@echo $(GRAY) ""
	@norminette $(SRC) *.h */*.h
	@echo $(NONE)$(GREEN) "     NORM OK \n" $(NONE)

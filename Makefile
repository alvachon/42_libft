# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 16:27:04 by alvachon          #+#    #+#              #
#    Updated: 2022/10/11 14:08:10 by alvachon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

# --- FLAGS ---
FLAGS = -Wall -Wextra -Werror

# LIBRARY
LINKED_LIST_A = linkedlist.a
LINKED_LIST_DIR = libft/linked_list

MEMORY_A = memory.a
MEMORY_DIR = libft/memory/

NUMBER_A = nbr.a
NUMBER_DIR = libft/number/

STRING_A = string.a
STRING_DIR = libft/string/

TYPE_A = typemem.a
TYPE_DIR = libft/type/

WRITE_A = write.a
WRITE_DIR = libft/write/

LIBFT = 	$(LINKED_LIST_DIR)/$(LINKED_LIST_A)\
			$(MEMORY_DIR)/$(MEMORY_A)\
			$(NUMBER_DIR)/$(NUMBER_A)\
			$(STRING_DIR)/$(STRING_A)\
			$(TYPE_DIR)/$(TYPE_A)\
			$(WRITE_DIR)/$(WRITE_A)

YELL= '\033[0;33m'
GRE= '\033[0;32m'
GRAY='\033[2;37m'
NONE= '\033[0m'

all:
	@echo $(YELL) "\nIncoming :\n" $(NONE)
	@make -C $(LINKED_LIST_DIR)
	@make -C $(MEMORY_DIR)
	@make -C $(NUMBER_DIR)
	@make -C $(STRING_DIR)
	@make -C $(TYPE_DIR)
	@make -C $(WRITE_DIR)
	@echo $(GRE) "\nCompilation all done.\n" $(NONE)

clean:
	@echo $(YELL) "\nRemoving object:\n" $(NONE)
	@make -C $(LINKED_LIST_DIR) clean
	@make -C $(MEMORY_DIR) clean
	@make -C $(NUMBER_DIR) clean
	@make -C $(STRING_DIR) clean
	@make -C $(TYPE_DIR) clean
	@make -C $(WRITE_DIR) clean
	@echo $(NONE)$(GRE) "OK - - - - - - - - - - \n" $(NONE)

fclean: clean
	@echo $(YELL) "\nRemoving .a:\n" $(NONE)
	@make -C $(LINKED_LIST_DIR) fclean
	@make -C $(MEMORY_DIR) fclean
	@make -C $(NUMBER_DIR) fclean
	@make -C $(STRING_DIR) fclean
	@make -C $(TYPE_DIR) fclean
	@make -C $(WRITE_DIR) fclean
	@echo $(NONE)$(GRE) "OK - - - - - - - - - - \n" $(NONE)

re: fclean all

norm: $(SRC)
	@echo $(NONE)$(YELL) "\nNorminette verification :\n" $(NONE)
	@make -C $(LINKED_LIST_DIR) norm
	@make -C $(MEMORY_DIR) norm
	@make -C $(NUMBER_DIR) norm
	@make -C $(STRING_DIR) norm
	@make -C $(TYPE_DIR) norm
	@make -C $(WRITE_DIR) norm
	@echo $(NONE)$(GRE) "OK - - - - - - - - - - \n" $(NONE)

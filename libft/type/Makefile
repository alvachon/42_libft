# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 17:12:33 by alvachon          #+#    #+#              #
#    Updated: 2022/10/11 14:09:45 by alvachon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = typemem.a
FLAGS = -Wall -Wextra -Werror

SRC = $(ISASC_C) $(ASCTABLE_C) $(ASCMOD_C) $(ISINT_C)
OBJ_DIR = _objFiles
OBJ = *.o

HEAD = _include/typemem.h

# 1. (2) IS_ASCCI, IS_PRINT
ISASC_C = srcs/01_isascci.c
# 2. (4) IS_ALPHA, IS_DIGIT, IS_SPACE, IS_SYMBOL
ASCTABLE_C = srcs/02_asciitable.c 
# 3. (2) TO_UPPER, TO_LOWER
ASCMOD_C = srcs/03_modifier.c
# 4. (4) MAX_SIZE, IS_NEG, IS_POS, IS_ZERO
ISINT_C = srcs/04_isint.c

# COLORS
NONE='\033[0m'
GRAY='\033[2;37m'
CURSIVE='\033[3m'
YELL= '\033[0;33m'

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
	@echo $(NONE)$(GRAY) "Type :" $(NONE)
	@echo $(CURSIVE)"     - Cleaning ..." $(NONE)
	@rm -f $(OBJ) $(OBJ_DIR)/$(OBJ)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo $(NONE)$(GRAY) "Type :" $(NONE)
	@echo $(CURSIVE)"     - Removing ..." $(NONE)
	@rm -f $(NAME)

re: fclean all

norm:
	@echo $(NONE)$(GRAY) "Type :" $(NONE)
	@norminette $(SRC) $(HEAD)
	@echo ""$(NONE)
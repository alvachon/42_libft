# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 17:12:33 by alvachon          #+#    #+#              #
#    Updated: 2022/10/11 14:09:26 by alvachon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = nbr.a
FLAGS = -Wall -Wextra -Werror

SRC = $(CONVERSION_C) $(HELP_C)
OBJ_DIR = _objFiles
OBJ = *.o

HEAD = _include/nbr.h

# 1. (4) NB_LEN - ATOI - ITOA - ATOL
CONVERSION_C = srcs/conversion_4.c

# 2. ISDIGIT, ISSPACE
HELP_C = srcs/helper_2.c

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
	@echo $(NONE)$(GRAY) "Conversion :" $(NONE)
	@echo $(CURSIVE)"     - Cleaning ..." $(NONE)
	@rm -f $(OBJ) $(OBJ_DIR)/$(OBJ)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo $(NONE)$(GRAY) "Conversion :" $(NONE)
	@echo $(CURSIVE)"     - Removing ..." $(NONE)
	@rm -f $(NAME)

re: fclean all

norm:
	@echo $(NONE)$(GRAY) "Conversion :" $(NONE)
	@norminette $(SRC) $(HEAD)
	@echo ""$(NONE)
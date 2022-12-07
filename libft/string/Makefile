# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 00:24:14 by alvachon          #+#    #+#              #
#    Updated: 2022/12/07 16:17:10 by alvachon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = str.a
FLAGS = -Wall -Wextra -Werror

SRC = srcs/mem.c srcs/str_1.c srcs/str.c srcs/str_3.c srcs/str_4.c

OBJ_DIR = _objFiles
OBJ = *.o

HEAD = _include/str.h

# COLORS
NONE='\033[0m'
GRAY='\033[2;37m'
CURSIVE='\033[3m'
YELL= '\033[0;33m'

# RULES
all : $(NAME)

$(NAME): $(OBJ)
	@echo $(CURSIVE)$(GRAY)"      - Generating $(NAME)"$(NONE)
	@mv $(OBJ) $(OBJ_DIR)
	@ar rc $(NAME) $(OBJ_DIR)/$(OBJ)

$(OBJ): $(SRC)
	@gcc $(FLAGS) -c $(SRC)
	@mkdir -p $(OBJ_DIR)

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
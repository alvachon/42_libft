# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 00:43:14 by alvachon          #+#    #+#              #
#    Updated: 2022/10/11 14:10:26 by alvachon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = write.a
FLAGS = -Wall -Wextra -Werror

SRC = $(WRITE_C) $(FD_C)
OBJ_DIR = _objFiles
OBJ = *.o

HEAD = _include/write.h

#
WRITE_C = srcs/00_write.c
#
FD_C = srcs/01_fd.c

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
	@echo $(NONE)$(GRAY) "Writing :" $(NONE)
	@echo $(CURSIVE) "     - Cleaning ..." $(NONE)
	@rm -f $(OBJ) $(OBJ_DIR)/$(OBJ)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo $(NONE)$(GRAY) "Writing :" $(NONE)
	@echo $(CURSIVE) "     - Removing ..." $(NONE)
	@rm -f $(NAME)

re: fclean all

norm:
	@echo $(NONE)$(GRAY) "Writing :" $(NONE)
	@norminette $(SRC) $(HEAD)
	@echo ""$(NONE)
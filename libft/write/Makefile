# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 00:43:14 by alvachon          #+#    #+#              #
#    Updated: 2022/10/10 00:45:36 by alvachon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = write.a
FLAGS = -Wall -Wextra -Werror

SRC = $(WRITE_C) $(FD_C)
OBJ_DIR = _objFiles
OBJ = *.o

#
WRITE_C = srcs/00_write.c
#
FD_C = srcs/01_fd.c

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
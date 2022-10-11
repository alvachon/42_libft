# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 21:13:54 by alvachon          #+#    #+#              #
#    Updated: 2022/10/10 14:45:08 by alvachon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = linkedlist.a
FLAGS = -Wall -Wextra -Werror

SRC = $(LSTCREATE_C) $(LSTUTIL_C) $(LSTCURL_C)
OBJ_DIR = _objFiles
OBJ = *.o

# 1. (4) LST_NEW, LST_ADD_FRONT, LST_ADD_BACK, LST_LAST
LSTCREATE_C = srcs/create_node_4.c
# 2. (3) LST_CLEAR, LST_SIZE, LST_DELTONE
LSTUTIL_C = srcs/utilities_3.c
# 3. (2) LST_MAP, LST_ITER
LSTCURL_C = srcs/curl_action_2.c

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
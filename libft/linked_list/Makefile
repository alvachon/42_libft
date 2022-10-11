# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 21:13:54 by alvachon          #+#    #+#              #
#    Updated: 2022/10/11 14:09:29 by alvachon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = linkedlist.a
FLAGS = -Wall -Wextra -Werror

SRC = $(LSTCREATE_C) $(LSTUTIL_C) $(LSTCURL_C)
OBJ_DIR = _objFiles
OBJ = *.o

HEAD = _include/linkedlist.h

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
	@echo $(NONE)$(GRAY) "Linked List :" $(NONE)
	@echo $(CURSIVE)"     - Cleaning..." $(NONE)
	@rm -f $(OBJ) $(OBJ_DIR)/$(OBJ)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo $(NONE)$(GRAY) "Linked List :" $(NONE)
	@echo $(CURSIVE)"     - Removing..." $(NONE)
	@rm -f $(NAME)

re: fclean all

norm:
	@echo $(NONE)$(GRAY) "Linked List :" $(NONE)
	@norminette $(SRC) $(HEAD)
	@echo ""$(NONE)
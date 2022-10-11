# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 00:24:14 by alvachon          #+#    #+#              #
#    Updated: 2022/10/11 14:10:48 by alvachon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = string.a
FLAGS = -Wall -Wextra -Werror

# 7 files
SRC = $(STRALLOC_C) $(STRCOMPARE_C) $(STRCREATE_C) $(STRFREE_C) $(STRINFO_C)\
		$(STRLOC_C) $(STRMOD_C) $(STRHELP_C)

OBJ_DIR = _objFiles
OBJ = *.o

HEAD = _include/string.h

# 1. (3) STRDUP, STRNDUP, STRLCPY, MEMCPY
STRALLOC_C = srcs/str_alloc_3.c

# 2. (2) STRNCMP, STRCMP
STRCOMPARE_C = srcs/str_compare_2.c

# 3. (4) STRJOIN, SUBSTR, STRTIM, SPLIT
STRCREATE_C = srcs/str_create_4.c

# 4. (1) FREEALL
STRFREE_C = srcs/str_free_1.c

# 5. (2) STRLEN, WORDCOUNT
STRINFO_C = srcs/str_info_2.c

# 6. (3) STRNSTR, STRRCHR, STRCHR
STRLOC_C = srcs/str_locate_3.c

# 7. (4) STRUPCASE, STRLCAT, STRITERI, STRMAPI
STRMOD_C = srcs/str_modifier_4.c

# 8. (2) CALLOC, MEMSET
STRHELP_C = srcs/str_helper_1.c

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
	@echo $(NONE)$(GRAY) "String :" $(NONE)
	@echo $(CURSIVE)"     - Cleaning ..." $(NONE)
	@rm -f $(OBJ) $(OBJ_DIR)/$(OBJ)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo $(NONE)$(GRAY) "String :" $(NONE)
	@echo $(CURSIVE)"     - Removing ..." $(NONE)
	@rm -f $(NAME)

re: fclean all

norm:
	@echo $(NONE)$(GRAY) "String :" $(NONE)
	@norminette $(SRC) $(HEAD)
	@echo ""$(NONE)
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 11:27:03 by omizin            #+#    #+#              #
#    Updated: 2025/09/08 11:27:04 by omizin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Unnecessary_violence

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS_DIR = objs
OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++17

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

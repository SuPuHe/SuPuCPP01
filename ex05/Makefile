# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 16:55:57 by omizin            #+#    #+#              #
#    Updated: 2025/09/08 17:35:51 by omizin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++17

SRCS = main.cpp Harl.cpp

OBJS = $(SRCS:%.cpp=%.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

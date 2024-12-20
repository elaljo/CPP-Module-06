# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/11 12:35:23 by moelalj           #+#    #+#              #
#    Updated: 2024/12/11 12:35:39 by moelalj          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serializer

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

g++ = c++

RM = rm -rf

SRC = main.cpp\
	Serializer.cpp\

OBJS := $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp Serializer.hpp
	$(g++) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(g++) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all
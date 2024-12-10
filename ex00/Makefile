# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/05 09:53:26 by moelalj           #+#    #+#              #
#    Updated: 2024/12/05 11:01:31 by moelalj          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Scalar

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

g++ = c++

RM = rm -rf

SRC = main.cpp\
	ScalarConverter.cpp\

OBJS := $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp ScalarConverter.hpp
	$(g++) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(g++) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdausque <tdausque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/04 21:13:43 by tdausque          #+#    #+#              #
#    Updated: 2025/04/04 21:13:44 by tdausque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
SRCS = ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp \
	main.cpp
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
OBJS_DIR = objs
OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

NAME = ScavTrap

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

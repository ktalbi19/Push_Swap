# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 18:55:41 by ktalbi            #+#    #+#              #
#    Updated: 2021/11/11 17:42:35 by ktalbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
LDIR = libft
PUSH_SWAP = push_swap
NAME = $(PUSH_SWAP)
LIBFT_A = $(LDIR)/libft.a
RM = rm -rf
INCS = -I./include -I./libft
INCLIB = -L ./$(LDIR) -lft

CFLAGS = -Werror -Wextra -Wall -I$(LDIR)/
LDFLAGS = -L./$(LDIR)

SRCS = $(wildcard *.c)
OBJ = $(SRCS:.c=.o)

all: $(NAME) clean

$(NAME): $(OBJ)
	make -C $(LDIR)
	$(CC) $(CFLAGS) $(INCS) -o $(PUSH_SWAP) $(OBJ) $(INCLIB)

clean:
	$(RM) *.o
	$(RM) */*.o

.PHONY: all clean fclean

fclean: clean
	$(RM) $(NAME) $(LIBFT_A)
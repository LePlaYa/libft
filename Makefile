# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jscheuma <jscheuma@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/12 21:14:06 by jscheuma          #+#    #+#              #
#    Updated: 2021/05/12 21:14:06 by jscheuma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC := $(shell find . -name '*.c')
OBJS := $(SRC:%.c=%.o)

all: $(NAME)

print:
	@echo $(OBJS)

%.c.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rc libft.a $^

so: $(OBJS)
	gcc -shared -o libft.so $^

clean:
	rm -f *.o *.out

fclean: clean
	rm -f $(NAME)

re: fclean all


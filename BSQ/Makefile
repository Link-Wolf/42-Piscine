# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 08:45:27 by bguyot            #+#    #+#              #
#    Updated: 2021/12/02 09:56:04 by xxxxxxx          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = bsq.c check_empty_square.c check_map_rules.c find_big_square.c get_corners.c uber.c get_board_size.c
FLAGS = -Wall -Wextra -Werror

all:
	clear
	gcc $(FLAGS) -O3 -o bsq $(SRC)

clean:
	rm -f bsq

re: clean all

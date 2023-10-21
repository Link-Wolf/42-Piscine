/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:05:38 by xxxxxxx           #+#    #+#             */
/*   Updated: 2021/11/18 09:46:54 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	place_queen(int *board, int queen, int *count);
int		placeable(int *board, int queen, int pos);
void	print_soluce(int *board);
void	fill_board(int *board);

int	ft_ten_queens_puzzle(void)
{
	int	count;
	int	board[10];

	fill_board(board);
	count = 0;
	place_queen(board, 0, &count);
	return(count);
}

void	place_queen(int *board, int queen, int *count)
{
	int breque;
	int pos;
	
	pos = 0;
	while (queen <= 9)
	{
		breque = 0;
		while (pos <= 9 && !breque)
		{
			//printf("queen %d et pos %d\n", queen, pos);
			if (placeable(board, queen, pos))
			{
				//printf("maman je suis placable\n");
				board[queen] = pos;
				if (queen == 9)
				{
					count++;
					print_soluce(board);
					pos = board[queen -1] + 1;
					queen -= 2;
				}
				else
				{
					pos = 0;
				}
				queen++;
				breque = 1;
			}
			else
			{
				if (pos >= 9)
				{
					if (board[queen - 1] < 9)
						pos = board[queen - 1] + 1;
					while(queen > 0 && board[queen - 1] == 9)
						queen--;
					queen--;
					breque = 1;
				}
				else
					pos++;
			}
		}
	}
}





void	place_queen_kc(int *board, int queen, int *count)
{	
	/*if (queen == 9)
		printf("Maman je veux poser une reine (%d)\n", queen);*/
	int pos;

	pos = 0;
	while (pos < 10)
	{
		if (placeable(board, queen, pos))
		{
			board[queen] = pos;
			if (queen < 9)
				place_queen(board, queen + 1, count);
			*count += 2;
			print_soluce(board);
			/*pos++;
			*count += 2;
			print_soluce(board);
			return (1);*/
		}
		pos++;
	}
}

int placeable(int *board, int queen, int pos)
{
	int x_queen;

	x_queen	= 0;
	while (x_queen < queen)
	{
		if (queen >= 8)
		{
	//		printf("Reine %d\npos : %d\nboard[queen] : %d\npos + (queen - x_queen) : %d\npos - (queen - x_queen) : %d\n", queen, pos, board[queen],pos+(queen-x_queen),pos-(queen-x_queen));
		}
		if (pos == board[x_queen] 
			|| pos + (queen - x_queen) == board[x_queen]
			|| pos - (queen - x_queen) == board[x_queen])
			return (0);
		x_queen++;
	}
	//printf("c bon la %dieme est posee maman\n", queen);
	return (1);
}

void print_soluce(int *board)
{
	int i;
	char c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	i = 0;
	while (i < 10)
	{
		c = (9 - board[i]) + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

void fill_board(int *board)
{
	int i;

	i = 0;
	while (i < 10)
	{
		board[i] = 0;
		i++;
	}
}

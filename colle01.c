/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equillie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 00:36:13 by equillie          #+#    #+#             */
/*   Updated: 2018/07/21 16:53:05 by equillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	colle01(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		while (i <= x)
		{
			if (((i == 1) && (j == 1)) || ((i == x) &&
						(j == y) && (j != 1) && (i != 1)))
				ft_putchar('/');
			else if (((i == x) && (j == 1)) || ((i == 1) && (j == y)))
				ft_putchar('\\');
			else if (((i != 1) && (i != x)) && ((j != 1) && (j != y)))
				ft_putchar(' ');
			else
				ft_putchar('*');
			i++;
		}
		if (x != 0 && y != 0)
			ft_putchar('\n');
		i = 1;
		j++;
	}
}

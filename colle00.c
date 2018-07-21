/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equillie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 00:36:13 by equillie          #+#    #+#             */
/*   Updated: 2018/07/21 17:11:44 by equillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	colle00(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		while (i <= x)
		{
			if (((i == 1) && (j == 1)) || ((i == x) && (j == y)) ||
					((i == 1) && (j == y)) || ((i == x) && (j == 1)))
				ft_putchar('o');
			else if ((i == 1) || (i == x))
				ft_putchar('|');
			else if ((j == 1) || (j == y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			i++;
		}
		if (x != 0 && y != 0)
			ft_putchar('\n');
		i = 1;
		j++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equillie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 23:28:11 by equillie          #+#    #+#             */
/*   Updated: 2018/07/21 17:09:19 by equillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);
void	colle00(int x, int y);

int		main(int argc, char **argv)
{
	(void)argc;
	colle00(atoi(argv[1]), atoi(argv[2]));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 08:46:47 by malu              #+#    #+#             */
/*   Updated: 2018/07/21 20:39:51 by malu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);

#define BUF_SIZE 1

int		main(int ac, char **av)
{
	(void)av;
	(void)ac;
	char buf[BUF_SIZE + 1];
	int ret;
	int i;
	char *old_string;
	char *new_string;

	i = 2;
	ret = read(STDIN_FILENO, buf , BUF_SIZE);
	new_string = malloc(sizeof(char) * i);
	old_string = malloc(sizeof(char) * 1);
	while (ret)
	{
		free(new_string);
		new_string = malloc(sizeof(char) * i);
		ft_strcpy(new_string, old_string);
		free(old_string);
		old_string = malloc(sizeof(char) * i);
		ft_strcpy(old_string, buf);
		ft_strcat(new_string, old_string);
		ft_strcpy(old_string, new_string);
		ret = read(STDIN_FILENO, buf, BUF_SIZE);
		i++;
	}
	printf("%s\n", old_string);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarouac <fkarouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 21:39:26 by fkarouac          #+#    #+#             */
/*   Updated: 2020/01/30 22:19:19 by fkarouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int		i;
	int		j;
	char	**str;
	extern char **environ;

	i = 0;
	j = -1;
	if (!(str = (char **)malloc(sizeof(char *) * ac)))
		return (0);
	while (av[++i])
		str[++j] = av[i];
	str[++j] = NULL;
	i = -1;
	execve(av[1], str, environ);
}

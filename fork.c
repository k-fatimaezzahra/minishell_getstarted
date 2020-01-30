#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include "../ft_ls_corr/libft/libft.h"

int main()
{
	pid_t	p;
	char	*buff;
	char	**dbl;
	int		i;

	i = -1;
	while (1)
	{
		ft_putstr("minishell > ");
		get_next_line(0, &buff);
		dbl = ft_strsplit(buff, ' ');
		if ((p = fork()) == -1)
			return (-1);
		else if (p == 0)
		{
			execve(dbl[0], dbl, NULL);
		}
		else
		{
			wait (NULL);
		}
	}
}

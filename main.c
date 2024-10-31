/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgendrot <mgendrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:03:18 by mgendrot          #+#    #+#             */
/*   Updated: 2024/10/31 13:51:51 by mgendrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

char	*ft_prit(int fpointer, char *singleLine)
{
	free(singleLine);
	singleLine = get_next_line(fpointer);
	printf("%s", singleLine);
	return (singleLine);
}

char	*tsts(int fpointer, char *singleLine)
{
	char	*temp;
	int 	i;

	i = -1;
	while (++i != 2)
		singleLine = ft_prit(fpointer, singleLine);
	if (BUFFER_SIZE > 100)
	{
		while (temp != NULL)
		{
			temp = get_next_line(fpointer);
			free(temp);
		}
	}
	singleLine = ft_prit(fpointer, singleLine);
	return (singleLine);
}

int	main(void)
{
	int		fd;
	char	*singleLine;

	singleLine = malloc(1 * sizeof(char));
	fd = open("tests/ts.txt", MAX_FD);
	/*
	while (singleLine != NULL)
	{
		free(singleLine);
		singleLine = get_next_line(fpointer);
		printf("%s", singleLine);
	}
	*/
	singleLine = tsts(fd, singleLine);
	//fd = open("tests/read_error.txt", MAX_FD);
	//singleLine = tsts(fd, singleLine);
	free(singleLine);
	close(fd);
	return (0);
}

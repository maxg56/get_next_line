/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgendrot <mgendrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:03:18 by mgendrot          #+#    #+#             */
/*   Updated: 2024/10/24 16:55:53 by mgendrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fpointer;
	char	*singleLine;

	singleLine = malloc(1 * sizeof(char));
	fpointer = open("tests/t.txt", MAX_FD);
	while (singleLine != NULL)
	{
		free(singleLine);
		singleLine = get_next_line(fpointer);
		printf("%s", singleLine);
	}
	free(singleLine);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgendrot <mgendrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:03:18 by mgendrot          #+#    #+#             */
/*   Updated: 2024/11/06 15:59:03 by mgendrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>



int	main(void)
{
	int		fd;
	char	*singleLine;

	singleLine = NULL;
	fd = open("t.txt", O_RDONLY);
	singleLine = get_next_line(fd);
	printf("%s", singleLine);
	free(singleLine);
	return (0);
}

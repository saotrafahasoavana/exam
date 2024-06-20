/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 10:48:03 by saandria          #+#    #+#             */
/*   Updated: 2024/06/13 10:54:49 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int a, char *b[])
{
	int	i;

	if (a == 4 && !b[2][1] && !b[3][1])
	{
		i = 0;
		while(b[1][i])
		{
			if(b[1][i] == b[2][0])
				b[1][i] = b[3][0];
			write(1, &b[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
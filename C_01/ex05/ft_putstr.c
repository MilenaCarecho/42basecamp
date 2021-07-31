/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:50:10 by mcarecho          #+#    #+#             */
/*   Updated: 2021/07/27 22:28:08 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr(char *c)
{
	char	string;
	int		i;

	i = 0;
	string = c[i];
	while (string != '\0')
	{
		string = c[i];
		write (1, &string, 1);
		i++;
	}
}

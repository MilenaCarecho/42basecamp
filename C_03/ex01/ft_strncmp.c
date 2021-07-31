/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:06:02 by mcarecho          #+#    #+#             */
/*   Updated: 2021/07/31 04:38:26 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (s1[a] == s2[a] && s1[a] != '\0' && a < (n - 1))
	{
		a++;
	}
	if (n == 0)
	{
		return (0);
	}
	b = s1[a] - s2[a];
	return (b);
}

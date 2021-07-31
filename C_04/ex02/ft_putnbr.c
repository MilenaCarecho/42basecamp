/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 00:32:32 by mcarecho          #+#    #+#             */
/*   Updated: 2021/07/31 02:18:19 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(char n)
{
	write(1, &n, 1);
}

void	ft_putnbr(int nb)
{
	int	number;

	if (nb == -2147483648)
	{
		ft_print('-');
		ft_print('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb >= 0)
		number = nb;
	else
	{
		ft_print('-');
		number = nb * -1;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_print(number % 10 + 48);
	}
	else
		ft_print(number + 48);
}

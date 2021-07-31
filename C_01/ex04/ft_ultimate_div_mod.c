/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:20:16 by mcarecho          #+#    #+#             */
/*   Updated: 2021/07/27 19:32:02 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	replace_a;
	int	replace_b;

	replace_a = *a;
	replace_b = *b;
	*a = replace_a / replace_b;
	*b = replace_a % replace_b;
}

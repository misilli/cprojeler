/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidilli <mmidilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:21:22 by mmidilli          #+#    #+#             */
/*   Updated: 2024/02/01 17:22:58 by mmidilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
	}
	*a = div;
	*b = mod;
}

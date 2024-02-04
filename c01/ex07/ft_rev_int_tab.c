/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidilli <mmidilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:55:38 by mmidilli          #+#    #+#             */
/*   Updated: 2024/02/04 14:55:38 by mmidilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	sizecopy;
	int	i;

	i = 0;
	sizecopy = size;
	while (i < (sizecopy / 2))
	{
		size--;
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
	}
}

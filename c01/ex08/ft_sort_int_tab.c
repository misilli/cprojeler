/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidilli <mmidilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:55:41 by mmidilli          #+#    #+#             */
/*   Updated: 2024/02/04 14:55:41 by mmidilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 1;
	j = 0;
	while (i < size)
	{
		temp = tab[i];
		j = i - 1;
		while (tab[j] > temp && j >= 0)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = temp;
		i++;
	}
}

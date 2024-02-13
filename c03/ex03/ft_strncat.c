/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidilli <mmidilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:33:21 by mmidilli          #+#    #+#             */
/*   Updated: 2024/02/13 12:49:23 by mmidilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	c = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[c] != '\0') && (c < nb))
	{
		dest[c + i] = src[c];
		c++;
	}
	while (c < nb)
	{
		dest[c + i] = '\0';
		c++;
	}
	return (dest);
}

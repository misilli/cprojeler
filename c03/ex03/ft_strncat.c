/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidilli <mmidilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:33:21 by mmidilli          #+#    #+#             */
/*   Updated: 2024/02/14 13:50:25 by mmidilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	dest[c + i] = '\0';
	return (dest);
}

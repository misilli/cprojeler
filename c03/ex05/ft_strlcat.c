/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidilli <mmidilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 23:10:03 by mmidilli          #+#    #+#             */
/*   Updated: 2024/02/13 15:54:21 by mmidilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dleng;
	unsigned int	sleng;

	i = 0;
	j = ft_strlen(dest);
	dleng = j;
	sleng = ft_strlen(src);
	if (size == 0 || size <= dleng)
		return (sleng + size);
	while (src [i] != '\0' && i < size - dleng - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dleng + sleng);
}

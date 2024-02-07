/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidilli <mmidilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:27:35 by mmidilli          #+#    #+#             */
/*   Updated: 2024/02/05 20:27:35 by mmidilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcrapitalize(char *str)
{
	int	i;
	int	temp;

	temp = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (temp == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			temp = 1;
			str[i] -= 32;
		}
		i++;
		if (str[i] < 'a' || str[i] > 'z' )
		{
			temp = 0;
			if (str[i] >= 48 && str[i] <= 57)
			{
				temp=1;
			}
		}
	}
	return (str);
}

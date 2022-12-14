/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:51:20 by azourgan          #+#    #+#             */
/*   Updated: 2022/07/31 17:01:07 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	z;

	z = 0;
	while (str[z])
	{
		if (str[z] >= 'A' && str[z] <= 'Z')
		{
			str[z] += 32;
		}
		z++;
	}
	return (str);
}

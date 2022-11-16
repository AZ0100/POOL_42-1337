/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:51:14 by azourgan          #+#    #+#             */
/*   Updated: 2022/08/01 14:31:36 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	a;
	unsigned int	z;

	a = 0;
	z = 0;
	while (dest[z])
	{
		z++;
	}
	while (src[a])
	{
		dest[z] = src[a];
		z++;
		a++;
	}
	dest[z] = '\0';
	return (dest);
}

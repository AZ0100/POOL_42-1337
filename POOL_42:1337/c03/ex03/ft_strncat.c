/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:33:03 by azourgan          #+#    #+#             */
/*   Updated: 2022/08/01 15:20:03 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	z;

	a = 0;
	z = 0;
	while (dest[z])
	{
		z++;
	}
	while (src[a] && a < nb)
	{
		dest[z] = src[a];
		a++;
		z++;
	}
	dest[z] = '\0';
	return (dest);
}

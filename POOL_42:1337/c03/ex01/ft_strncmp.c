/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:14:16 by azourgan          #+#    #+#             */
/*   Updated: 2022/08/03 18:22:58 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	z;

	z = 0;
	while ((s1[z] || s2[z]) && z < n)
	{
		if (s1[z] != s2[z])
			return ((unsigned char)s1[z] -(unsigned char)s2[z]);
		z++;
	}
	return (0);
}

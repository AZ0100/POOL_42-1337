/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:54:34 by azourgan          #+#    #+#             */
/*   Updated: 2022/07/31 14:29:11 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	z;

	z = 0;
	while (str[z])
	{
		if (!(str[z] >= 'A' && str[z] <= 'Z'))
		{
			return (0);
		}
	z++;
	}
	return (1);
}

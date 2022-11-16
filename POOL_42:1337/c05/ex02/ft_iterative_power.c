/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 21:40:23 by azourgan          #+#    #+#             */
/*   Updated: 2022/08/08 04:37:24 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (nb > 2147483647)
		return (0);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power != 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}

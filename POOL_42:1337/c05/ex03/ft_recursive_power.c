/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 21:40:47 by azourgan          #+#    #+#             */
/*   Updated: 2022/08/08 19:38:44 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 0;
	if (nb > 2147483647)
		return (0);
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		i = nb * ft_recursive_power(nb, power - 1);
	return (i);
}

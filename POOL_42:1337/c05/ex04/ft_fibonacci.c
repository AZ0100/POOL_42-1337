/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 21:41:28 by azourgan          #+#    #+#             */
/*   Updated: 2022/08/08 19:39:33 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	a;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	else
		a = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (a);
}

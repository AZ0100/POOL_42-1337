/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:42:01 by azourgan          #+#    #+#             */
/*   Updated: 2022/07/24 06:04:19 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	first;
	char	secend;
	char	last;

	first = '0';
	while (first <= '7')
	{
		secend = first + 1;
		while (secend <= '8')
		{
			last = secend + 1;
			while (last <= '9')
			{
				ft_putchar (first);
				ft_putchar(secend);
				ft_putchar(last);
				if (first != '7')
					write(1, ", ", 2);
				last++;
			}
		secend++;
		}
	first++;
	}
}

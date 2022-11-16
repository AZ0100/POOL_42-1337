/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:14:40 by azourgan          #+#    #+#             */
/*   Updated: 2022/07/26 15:06:05 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;

	a = 0;
	while (a < size -1)
	{
		if (tab[a] > tab[a + 1])
		{
			ft_swap(&tab[a], &tab[a + 1]);
			a = -1;
		}
		a++;
	}
}

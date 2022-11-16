/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:09:50 by azourgan          #+#    #+#             */
/*   Updated: 2022/08/11 12:50:55 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (ft_alphanumeric(str[i]))
		{
			if (j && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!j && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			j = 0;
		}
		else
			j = 1;
		i++;
	}
	return (str);
}

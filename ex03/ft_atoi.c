/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:24:05 by iung              #+#    #+#             */
/*   Updated: 2022/09/27 11:28:33 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nbr(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

int	ft_whitespace(char c)
{
	if (c == ' ' || c == '\f'
		|| c == '\n'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (ft_whitespace(str[i]) == 1 && str[i])
	{
		i++;
	}
	while (str[i] == '-' || (str[i] == '+' && str[i]))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}		
	while (ft_nbr(str[i]) == 1 && str[i])
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb * sign);
}

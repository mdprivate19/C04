/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumergu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:09:35 by mdumergu          #+#    #+#             */
/*   Updated: 2022/07/28 20:33:21 by mdumergu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	sign;
	int	nb;

	a = 0;
	nb = 0;
	sign = 1;
	while ((str[a] >= 9 && str[a] <= 13) || str[a] == ' ')
		a++;
	while (str[a] >= '+' && str[a] <= '-')
	{
		if (str[a] == '-')
				sign = sign * -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		nb = (nb * 10) + str[a] - '0';
		a++;
	}
	return (sign * nb);
}

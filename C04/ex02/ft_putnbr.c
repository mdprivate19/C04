/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumergu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:00:25 by mdumergu          #+#    #+#             */
/*   Updated: 2022/07/25 15:07:41 by mdumergu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	temp;
	long	pnb;

	pnb = nb;
	if (pnb < 0)
	{
		pnb *= -1;
		write(1, "-", 1);
	}
	if (pnb > 10)
	{
		ft_putnbr(pnb / 10);
		temp = '0' + (char)(pnb % 10);
		write(1, &temp, 1);
	}
	if (pnb < 10)
	{
		temp = '0' + (char)(pnb % 10);
		write(1, &temp, 1);
	}
}

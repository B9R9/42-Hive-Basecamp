/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 05:47:43 by briffard          #+#    #+#             */
/*   Updated: 2021/07/10 19:31:10 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int a;
	int i;

	i = 0;
	a = 1;
	while (a != nb || i == nb)
	{
		a = i * i;
		i++;
	}
	return (i - 1);
}

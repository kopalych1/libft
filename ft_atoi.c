/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:10:06 by akostian          #+#    #+#             */
/*   Updated: 2024/04/08 23:16:07 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	return (c == ' ' || c == '\n' || c == '\t'
		||c == '\v' || c == '\f' || c == '\r');
}

int	ft_atoi(char *addr)
{
	int	sign;
	int	ret;

	while (ft_isspace(*addr))
		addr++;
	sign = 1;
	if (*addr == '-' || *addr == '+')
	{
		if (*addr == '-')
			sign = -1;
		addr++;
	}
	ret = 0;
	while (*addr >= '0' && *addr <= '9')
		ret = 10 * ret + (*addr++ - '0');
	return (ret * sign);
}

/* #include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("%d\n", ft_atoi("   \t-1228"));
	printf("%d\n", atoi("      \t-1228"));
} */
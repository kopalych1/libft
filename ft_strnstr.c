/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:25:47 by akostian          #+#    #+#             */
/*   Updated: 2024/04/09 12:05:23 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *big, char *little, unsigned long int len)
{
	unsigned long int	i;
	unsigned long int	j;

	i = 0;
	while (big[i] && len-- > 0)
	{
		j = 0;
		while (big[i + j] == little[j])
			j++;
		if (!little[j])
			return (big + i);
		i++;
	}
	return ((void *)0);
}

/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	testcase1[22] = "jshfisKeiufhsieufhus";

	printf("%s", ft_strnstr(testcase1, "Keiu", 3));
}
 */
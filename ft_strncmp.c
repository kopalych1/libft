/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:47:15 by akostian          #+#    #+#             */
/*   Updated: 2024/04/08 15:42:10 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned long int n)
{
	while ((*s1 || *s2) && n-- > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[22] = "jshfisheiufhsieufhus";
	char	str2[16] = "jshfisheiufhsie";

	printf("%d\n", ft_strncmp(str1, str2, 5));
	printf("%d\n", strncmp(str1, str2, 5));
} */
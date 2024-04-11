/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:41:47 by akostian          #+#    #+#             */
/*   Updated: 2024/04/11 16:41:24 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occ;

	last_occ = (void *)0;
	while (*s)
	{
		if (*s == c)
			last_occ = (char *)s;
		s++;
	}
	return (last_occ);
}
/* 
#include <stdio.h>
int	main(void)
{
	char	testcase1[22] = "jshfisKeiufhsieufhus";

	printf("%s", ft_strrchr(testcase1, 'i'));
}
 */
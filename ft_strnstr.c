/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:25:47 by akostian          #+#    #+#             */
/*   Updated: 2024/04/12 12:53:33 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (haystack[i] && len-- > 0)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
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
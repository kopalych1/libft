/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 07:12:50 by akostian          #+#    #+#             */
/*   Updated: 2024/04/11 05:27:30 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	i;

	dst_size = ft_strlen(dst);
	if (size <= dst_size)
		return (size + ft_strlen(src));
	i = 0;
	while (src[i] && dst_size + 1 < size)
		dst[dst_size++] = src[i++];
	dst[dst_size] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

/* #include <stdio.h>
int	main(void)
{
	char	testcase1[40] = "jshfisKeiuaaaaaaaaaaa";
	char	testcase2[22] = "jshfisKeiu";

	printf("%d\n", ft_strlcat(testcase1, testcase2, 20));
	printf("%s\n", testcase1);
	printf("%s\n", testcase2);
}
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:02:28 by akostian          #+#    #+#             */
/*   Updated: 2024/04/11 12:16:13 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*copy;
	const size_t	src_len = ft_strlen(src);

	copy = malloc(sizeof(char) * (src_len + 1));
	if (!copy)
		return (0);
	return (ft_memcpy(copy, (char *)src, src_len + 1));
}
/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[22] = "jshfisheiufhsieufhus";
	char	*str2;

	str2 = ft_strdup(str1);
	printf("%s\n", str2);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:48:29 by akostian          #+#    #+#             */
/*   Updated: 2024/04/11 12:14:21 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	char	*dst_cpy;
	char	*src_cpy;

	dst_cpy = (char *)dst;
	src_cpy = (char *)src;
	while (n-- > 0)
		*dst_cpy++ = *src_cpy++;
	return (dst);
}
/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[22] = "jshfisheiufhsieufhus";
	char	str2[16] = "               ";

	printf("%s\n", (char *)ft_memcpy(str2, str1, 5));
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:02:20 by akostian          #+#    #+#             */
/*   Updated: 2024/04/09 11:14:15 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memchr(const void *s, int c, unsigned long int n)
{
	char	*s_cpy;

	s_cpy = (char *)s;
	while (n-- > 0)
	{
		if (*s_cpy == c)
			return (s_cpy);
		s_cpy++;
	}
	return ((void *)0);
}

/* #include <stdio.h>
int	main(void)
{
	char	testcase1[22] = "jshfisKeiufhsieufhus";

	printf("%p\n", testcase1);
	printf("%p\n", ft_memchr(testcase1, 'b', 250));
}
 */
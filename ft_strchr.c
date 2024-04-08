/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:17:55 by akostian          #+#    #+#             */
/*   Updated: 2024/04/08 14:25:19 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *s, int c)
{
	while (*s != c && *s)
		s++;
	return (s);
}

/* #include <stdio.h>
int	main(void)
{
	char	testcase1[22] = "jshfisKeiufhsieufhus";

	printf("%s", ft_strchr(testcase1, 'K'));
}
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:58:17 by akostian          #+#    #+#             */
/*   Updated: 2024/04/08 11:33:21 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long int	ft_strlen(const char *s)
{
	unsigned long int	length;

	length = 0;
	while (*s++)
		length++;
	return (length);
}
/* 
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int			i;
	const char	*testcase1 = "aisjfioe*#$";
	const char	*testcase2 = "sijfs\toief  ass3";
	const char	*testcase3 = "123c893wu28";

	if (argc > 1)
	{
		i = 0;
		while (++i < argc)
			printf("'%s'\t%d\t%d\n", argv[i],
				ft_strlen(argv[i]), strlen(argv[i]));
	}
	else
	{
		printf("'%s'\t%d\t%d\n", testcase1,
			ft_strlen(testcase1), strlen(testcase1));
		printf("'%s'\t%d\t%d\n", testcase2,
			ft_strlen(testcase2), strlen(testcase2));
		printf("'%s'\t%d\t%d\n", testcase3,
			ft_strlen(testcase3), strlen(testcase3));
	}
}
 */
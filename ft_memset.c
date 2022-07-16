/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biacast5 <biacast5@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:58:41 by biacast5          #+#    #+#             */
/*   Updated: 2022/07/16 19:31:10 by biacast5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		*p = (unsigned char)c;
		p++;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char t[] = "42 - THE MEANING OF LIFE, THE UNIVERSE, AND EVERYTHING";
// 	char s[] = "42 - the meaning of life, the universe, and everything";

// 	printf("Before ft_memset: %s \n", s);

// 	ft_memset(s + 20, '#', 19*sizeof(char));
// 	printf("Result after ft_memset: %s \n", s);

// 	memset(t + 20, '#', 19*sizeof(char));
// 	printf("Function default value: %s \n", t);
// }
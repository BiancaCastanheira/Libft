/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biacast5 <biacast5@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 22:12:21 by biacast5          #+#    #+#             */
/*   Updated: 2022/07/17 14:28:56 by biacast5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	dest2 = (char *)dest;
	src2 = (char *)src;
	i = 0;
	while (i < n)
	{
		*dest2 = *src2;
		src2++;
		dest2++;
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char srt1test[] = "BLACKHOLE";
// 	char srt2test[] = "SURVIVER!";
// 	char str1[] = "Blackhole";
// 	char str2[] = "Surviver!";

// 	printf("Before ft_memcpy: %s \n", str1);

// 	ft_memcpy(str1, str2, sizeof(str2));
// 	printf("Result after ft_memcpy: %s \n", str1);

// 	memcpy(srt1test, srt2test, sizeof(str2));
// 	printf("Function default value: %s \n", srt1test);
// }
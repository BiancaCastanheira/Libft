/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biacast5 <biacast5@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 23:41:45 by biacast5          #+#    #+#             */
/*   Updated: 2022/07/17 10:45:48 by biacast5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	dest2 = (char *)dest;
	src2 = (char *)src;
	i = 0;
	while (i < n)
	{
		if (src < dest)
		{
			dest2[n - i - 1] = src2 [n - i - 1];
		}
		else
		{
			dest2[i] = src2[i];
		}
		i++;
	}
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char srt1test[] = "BLACKHOLE";
	char srt2test[] = "SURVIVER!";
	char str1[] = "Blackhole";
	char str2[] = "Surviver!";

	printf("Before ft_memmove: %s \n", str1);

	memcpy(str1, str2,  sizeof(str2));
	printf("Result after memcpy: %s \n", str1);

	ft_memmove(str1, str2,  sizeof(str2));
	printf("Result after ft_memmove: %s \n", str1);

	memmove(srt1test, srt2test,  sizeof(str2));
	printf("Function default value: %s \n", srt1test);
}
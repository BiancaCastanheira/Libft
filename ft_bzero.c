/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biacast5 <biacast5@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:50:45 by biacast5          #+#    #+#             */
/*   Updated: 2022/07/16 19:50:48 by biacast5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		*p = '\0';
		p++;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char t[] = "42: THE MEANING OF LIFE, THE UNIVERSE, AND EVERYTHING";
// 	char s[] = "42: The meaning of life, the universe, and everything";

// 	printf("Before ft_bzero: %s \n", s);

// 	ft_bzero(s + 2, 50*sizeof(char));
// 	printf("Result after ft_bzero: %s \n", s);

// 	bzero(t + 2, 50*sizeof(char));
// 	printf("Function default value: %s \n", t);
// }
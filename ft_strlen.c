/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biacast5 <biacast5@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:31:55 by biacast5          #+#    #+#             */
/*   Updated: 2022/07/09 15:52:58 by biacast5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	lenght;

	lenght = 0;
	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = "42 - the meaning of life, the universe, and everything";

// 	printf("The lengh of your input is: %zu \n", ft_strlen(s));
// 	printf("Function default value: %zu \n", strlen(s));
// }

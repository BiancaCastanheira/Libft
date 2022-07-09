/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biacast5 <biacast5@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 22:04:51 by biacast5          #+#    #+#             */
/*   Updated: 2022/07/09 15:51:57 by biacast5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	int	c;

// 	c = 'E';
// 	if (ft_isalpha(c))
// 	{
// 		printf("Your input is an alphabet letter\n");
// 	}
// 	else
// 	{
// 		printf("This is NOT an alphabet character \n");
// 	}
// 	printf("Function default value: %d \n", isalpha(c));
// }

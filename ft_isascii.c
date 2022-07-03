/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biacast5 <biacast5@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:33:27 by biacast5          #+#    #+#             */
/*   Updated: 2022/07/03 17:36:24 by biacast5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = 131;
// 	if (ft_isascii(c))
// 	{
// 		printf("Your input is a 7-bit US-ASCII character\n");
// 	}
// 	else
// 	{
// 		printf("This is NOT a 7-bit US-ASCII character\n");
// 	}
// }

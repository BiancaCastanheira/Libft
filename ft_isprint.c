/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biacast5 <biacast5@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:54:39 by biacast5          #+#    #+#             */
/*   Updated: 2022/07/03 18:55:45 by biacast5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
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

// 	c = 5;
// 	if (ft_isprint(c))
// 	{
// 		printf("Your input is a representation of a printable character\n");
// 	}
// 	else
// 	{
// 		printf("This is NOT a printable character\n");
// 	}
// }

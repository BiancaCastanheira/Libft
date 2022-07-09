/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biacast5 <biacast5@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:54:39 by biacast5          #+#    #+#             */
/*   Updated: 2022/07/09 15:52:43 by biacast5         ###   ########.fr       */
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
// #include <ctype.h>

// int	main(void)
// {
// 	int	c;

// 	c = '_';
// 	if (ft_isprint(c))
// 	{
// 		printf("Your input is a representation of a printable character\n");
// 	}
// 	else
// 	{
// 		printf("This is NOT a printable character\n");
// 	}
// 	printf("Function default value: %d \n", isprint(c));
// }

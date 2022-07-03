/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biacast5 <biacast5@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:24:07 by biacast5          #+#    #+#             */
/*   Updated: 2022/07/03 17:26:44 by biacast5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= 48 && c <= 57))
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

// 	c = 50;
// 	if (ft_isdigit(c))
// 	{
// 		printf("Your input is a number between 0 to 9\n");
// 	}
// 	else
// 	{
// 		printf("This is NOT a number\n");
// 	}
// }

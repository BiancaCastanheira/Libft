/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biacast5 <biacast5@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 22:04:51 by biacast5          #+#    #+#             */
/*   Updated: 2022/07/02 17:28:57 by biacast5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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

// 	c = '*';
// 	if (ft_isalpha(c))
// 	{
// 		printf("Your input is an alphabet letter\n");
// 	}
// 	else
// 	{
// 		printf("This is NOT an alphabet character \n");
// 	}
// }

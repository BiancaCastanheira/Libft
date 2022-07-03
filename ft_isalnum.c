/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biacast5 <biacast5@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:03:27 by biacast5          #+#    #+#             */
/*   Updated: 2022/07/03 18:04:44 by biacast5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else if ((c >= 0 && c <= 9) || (c >= 48 && c <= 57))
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

// 	c = '/';
// 	if (ft_isalnum(c))
// 	{
// 		printf("Your input is an alphanumeric character\n");
// 	}
// 	else
// 	{
// 		printf("This is NOT an alphanumeric character\n");
// 	}
// }

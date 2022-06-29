/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pc <pc@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:24:07 by pc                #+#    #+#             */
/*   Updated: 2022/06/28 21:24:10 by pc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_isdigit(int c)
{
     printf("\nc  : %d", c);
    if ((c >= 0 && c <= 9))    {
        return 1;
    } else {
        return 0;
 }
}

// #include <stdio.h>
// int main()
// {
    // int c = 2;
    // printf("\nIf result = 1 -> your input is a number between 0 to 9. If result = 0 -> not a number!");
    // printf("\nResult  : %d", ft_isdigit(c));
    // printf("\n");
// }
// 
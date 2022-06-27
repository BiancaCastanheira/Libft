/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pc <pc@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 22:04:51 by pc                #+#    #+#             */
/*   Updated: 2022/06/26 22:06:32 by pc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))    {
        return 1;
    } else {
        return 0;
    }
;}


// #include <stdio.h>
// int main()
// {
    // int c = 2;
    // printf("\nIf result = 1 -> your input is an alphabet letter. If result = 0 -> not a letter!");
    // printf("\nResult  : %d", ft_isalpha(c));
    // printf("\n");
// }
// 
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:52:41 by lrossiny          #+#    #+#             */
/*   Updated: 2022/07/11 17:52:42 by lrossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
    unsigned int    i;

    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (str[i - 1] == ' ')
            {
                str[i] += 32;
            }
        }
        i++;
    }
    return (str);
}

int main()
{
    char str[] = "je suis xavier dupont de ligones";

    ft_strcapitalize(str);
    printf("%s", str);
}
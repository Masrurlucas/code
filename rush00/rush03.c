/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapellet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:25:52 by mapellet          #+#    #+#             */
/*   Updated: 2022/07/10 10:22:48 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(char left, char middle, char right, int x)
{
	ft_putchar(left);
	x--;
	while (x > 1)
	{
		ft_putchar(middle);
		x--;
	}
	if (x == 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	line('A', 'B', 'C', x);
	y--;
	while (y > 1)
	{
		line('B', ' ', 'B', x);
		y--;
	}
	if (y == 1)
		line('A', 'B', 'C', x);
}

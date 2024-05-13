/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:10:59 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/13 13:45:31 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	number;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	number = nb % 10 + '0';
	write(1, &number, 1);
}

/*
#include <stdio.h>

int main() {
    ft_putnbr(123); 
    printf("\n");
    ft_putnbr(-456);
    printf("\n");
    ft_putnbr(0); 
    printf("\n");
    ft_putnbr(2147483647); 
    printf("\n");
    return 0;
}
*/

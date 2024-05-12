/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:36:44 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/12 18:34:43 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	ans;

	i = 0;
	sign = 1;
	ans = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
			break;
	}
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = sign * -1;	
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			ans = ans * 10 + str[i] - '0';
	}
	return (ans * sign);
}

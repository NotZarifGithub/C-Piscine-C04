/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:36:44 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/13 14:22:02 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	skipwhitespaces(const char *str, int *i)
{
	while (str[*i] != '\0'
		&& (str[*i] == ' '
			|| str[*i] == '\t'
			|| str[*i] == '\n'
			|| str[*i] == '\v'
			|| str[*i] == '\f'
			|| str[*i] == '\r'))
		(*i)++;
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	ans;

	i = 0;
	sign = 1;
	ans = 0;
	skipWhitespaces(str, &i);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans = ans * 10 + (str[i] - '0');
		i++;
	}
	return (ans * sign);
}

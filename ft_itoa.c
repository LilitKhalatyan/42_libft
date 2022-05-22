/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 17:13:25 by lkhalaty          #+#    #+#             */
/*   Updated: 2021/02/16 17:13:31 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	n_len(int n)
{
	unsigned int i;
	unsigned int len;

	i = n;
	len = 0;
	if (n < 0)
	{
		len = 1;
		i = n * (-1);
	}
	while (i >= 10)
	{
		i = i / 10;
		len++;
	}
	len++;
	return (len);
}

char				*ft_itoa(int n)
{
	unsigned int	i;
	unsigned int	len;
	char			*s;

	i = n;
	len = n_len(n);
	if (!(s = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		i = n * (-1);
		s[0] = '-';
	}
	s[len] = '\0';
	while (i >= 10)
	{
		s[len - 1] = i % 10 + '0';
		i = i / 10;
		len--;
	}
	s[len - 1] = i + '0';
	return (s);
}

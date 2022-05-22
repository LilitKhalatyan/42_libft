/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 00:01:11 by lkhalaty          #+#    #+#             */
/*   Updated: 2021/02/23 00:01:14 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		s_len;
	int		i;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	if (!(dest = (char *)malloc(sizeof(char) * (s_len + 1))))
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

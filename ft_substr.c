/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 20:49:54 by lkhalaty          #+#    #+#             */
/*   Updated: 2021/01/29 20:50:03 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	slen;
	char			*s2;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (!s || (slen < start + len))
		return (NULL);
	i = start;
	j = 0;
	if (!(s2 = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while ((i < len + start) && s[i] != '\0')
	{
		s2[j] = s[i];
		i++;
		j++;
	}
	s2[j] = '\0';
	return (s2);
}

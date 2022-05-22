/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 19:47:43 by lkhalaty          #+#    #+#             */
/*   Updated: 2021/02/22 18:29:41 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	start;
	unsigned int	end;
	unsigned int	len;
	char			*s3;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	start = i;
	len = ft_strlen(s1);
	while (len != start && ft_strchr(set, s1[len - 1]))
		len--;
	end = len;
	if (!(s3 = (char *)malloc((end - start + 1) * sizeof(char))))
		return (NULL);
	s3 = ft_substr(s1, start, end - start);
	s3[end] = '\0';
	return (s3);
}

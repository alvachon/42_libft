/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_create_4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:55:07 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/10 15:15:24 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../_include/string.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	len_s1;
	size_t	len_s2;

	if (s1 && s2)
	{
		i = 0;
		len_s1 = ft_strlen(s1);
		len_s2 = ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * len_s1 + len_s2 + 1);
		if (str == NULL)
			return (NULL);
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		i = 0;
		while (s2[i] != '\0')
			str[len_s1++] = s2[i++];
		str[len_s1] = '\0';
		return (str);
	}
	return (NULL);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*mem;
	size_t	len_s;

	if (s)
	{
		len_s = ft_strlen(s);
		if (len_s < start)
		{
			mem = ft_calloc(1, sizeof(char));
			if (!mem)
				return (NULL);
			mem[0] = '\0';
			return (mem);
		}
		if (len_s < len)
			len = len_s;
		mem = ft_calloc(len + 1, sizeof(char));
		if (!mem)
			return (NULL);
		ft_memcpy(mem, &s[start], len);
		mem[len] = '\0';
		return (mem);
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*mem;

	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		mem = (char *)malloc(sizeof(char) * ((end - start) + 1));
		if (mem)
			ft_strlcpy(mem, &s1[start], (end - start) + 1);
		return (mem);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**str_array;
	size_t	index;
	size_t	len_str;
	size_t	len_start;

	index = 0;
	len_str = 0;
	str_array = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (str_array && s)
	{
		while (index < ft_wordcount(s, c) && s[len_str] != '\0')
		{
			while (s[len_str] == c)
				len_str++;
			len_start = len_str;
			while (s[len_str] != c && s[len_str] != '\0')
				len_str++;
			str_array[index] = ft_strndup(&s[len_start], len_str - len_start);
			if (str_array[index++] == 0)
				return (ft_freeall(str_array));
		}
		str_array[index] = NULL;
		return (str_array);
	}
	return (NULL);
}
char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	find;

	x = 0;
	find = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		while (str[x + find] == to_find[find])
		{
			if (to_find[find + 1] == '\0')
				return (str + x);
			find++;
		}
		x++;
	}
	return (0);
}

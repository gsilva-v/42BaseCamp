int	cond(char c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	if ((c >= 97) && (c <= 122))
		return (1);
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}

int	ft_capital(char c)
{
	return (c >= 65 && c <= 90);
}

int	ft_lower(char c)
{
	return (c >= 97 && c <= 122);
}

char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		while (str[x] && !cond(str[x]))
			x++;
		if (str[x] && ft_lower(str[x]))
			str[x] = ((str[x] - 'a') + 'A');
		x++;
		while (str[x] && cond(str[x]))
		{
			if (ft_capital(str[x]))
				str[x] = ((str[x] - 'A') + 'a');
			x++;
		}
	}
	return (str);
}

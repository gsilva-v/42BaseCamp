char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 65 && str[x] <= 90)
			str[x] = str[x] + 32;
		x++;
	}
	return (str);
}

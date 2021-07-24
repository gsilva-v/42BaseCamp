char    *ft_strupcase(char *str)
{
    int    x;

    x = 0;
    while (str[x] != '\0')
    {
        if (str[x] >= 97 && str[x] <= 122)
            str [x] = ((str [x] - 97) + 65 );
		x++;
	}
    return (str);
}
int ft_str_is_printable(char *str)
{
	if(*str >= 32 && *str <= 126)
		return(1);
	return(0);
}
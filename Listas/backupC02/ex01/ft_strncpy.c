char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    y;

    y = 0;
    while ((src[y] != '\0') && (y < n))
    {
        dest[y] = src[y];
        y++;
    }
    while (y < n)
    {
        dest[y] = '\0';
        y++;
    }
    return (dest);
}
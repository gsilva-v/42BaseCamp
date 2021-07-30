#include <stdlib.h>
char	*ft_strdup(char *src)
{
	char	*new;	
	int		i;

	new = (char *) malloc (sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		new[i] = src [i];
		i++;
	}
	return (new);
}

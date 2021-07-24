/*
A função ft_strcpy copia os dados da string apontada pelo argumento src,
para a string apontada por dest até que um caractere final seja encontrado
strings (caractere nulo). A cópia é feita junto com o caractere de fim de linha
Se as linhas se sobrepõem, o resultado da cópia será indefinido.
*/
char 	*ft_strcpy ( char *dest, char *src)
//dest é um ponteiro para a string para a qual os dados serão copiados.
//src - ponteiro para a string de origem dos dados copiados.
{
	int 	i;

	i = 0 ;
	while(src[i] != '\0')
/* O loop copiará a segunda matriz para a primeira até chegar ao final da matriz '\ 0' */
	{
		dest [i] = src [i];
/*
Copia o caractere da posição zero da primeira linha para posição zero
da segunda linha e mais à medida que a variável i aumenta 
*/
		i ++;
	}
	dest [i] = '\0 ';
	return (dest);
}

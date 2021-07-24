#include <unistd.h>

void 	ft_putchar ( char c)	/* função de saída de caracteres */
{
	write( 1 , & c, 1 );
}

void 	ft_putstr ( char * str)				 /* função de impressão de linha */
{
	int 	i;

	i = 0 ;
	while (* (str + i))
		i ++;
	write( 1 , str, i);
}

char 	* ft_strcpy ( char * dest, char * src)	 /* Aceita endereços de string em s1 e endereços s2 */
{
	int i;									/* Declara uma variável para o contador */

	i = 0 ;									/* Inicializar contador para começar da posição zero */
	while (src [i])							 /* O loop copiará a segunda matriz para a primeira até chegar ao final da matriz '\0' */
	{
		dest [i] = src [i];					/* Copia o caractere da posição zero da primeira linha para zero
											 posição da segunda linha e mais à medida que a variável i aumenta */
		i ++;								/* Aumenta o contador para ir para a próxima célula da matriz */
	}
	dest [i] = src [i];	
											/* Se você chegou aqui, então o conteúdo do array foi copiado e no próximo
										    uma célula de matriz precisa ser encerrada */
	return (dest);							/* Encerra a função e retorna o endereço da linha para a qual copiamos os dados */
}

int	main(void)
{
	char 	r [] = { "teste" };			/* Crie uma string (matriz de caracteres) para copiar */
	char 	t [ 5 ];						/* Cria uma string vazia (matriz de caracteres) com um comprimento de 7 células para copiar a string r [] */
	char 	*p;							/* Declara um ponteiro para armazenar o endereço da string (array de caracteres) que será retornado a ele
											 função após cópia */
	ft_putstr (t);
	p = ft_strcpy (t, r);					/* Chame a função enviando os endereços da linha final, a linha original para ela */

	ft_putstr (p);

	ft_putstr (t);
								/* Vamos imprimir a string (array de caracteres), o endereço que obtivemos da função e armazenado no ponteiro */
	return ( 0 );								/* Encerra a função e retorna zero */
}
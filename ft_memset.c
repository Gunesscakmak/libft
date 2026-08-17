#include <stddef.h>
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*p;

	p = (char *) s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[] = "abcdefg";
	printf("%s\n", (char *) ft_memset(s, 'x', 5*sizeof(char)));
	printf("%s", (char *)memset(s, 'x', 5*sizeof(char)));
	return (0);
}
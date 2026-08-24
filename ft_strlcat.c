#include <stddef.h>

size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	i = 0;
	if (size <= dest_len)
		return (dest_len + src_len);
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (src_len + dest_len);
}
#include <stdio.h>
int main()
{
	char d[] = "abcdefghi";
	char *s = "jklmnopqrst";
	printf("%ld\n", ft_strlcat(d,s,4));
	printf("%s\n", d);
	return (0);
}

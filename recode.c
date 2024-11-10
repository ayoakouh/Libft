#include "libft.h"

size_t	ft_strlcat(char	*dest, const char	*src, size_t	size)
{
	size_t	lensrc;
	size_t	lendest;
	size_t	i;
	size_t	j;

	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	if (size == 0 || size <= lendest)
		return (lensrc + size);
	i = lendest;
	j = 0;
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (lensrc + lendest);
}
#include <string.h>
int main()
{
	char d1[] = "jeez";
	printf("%zu\n",  strlcat(d1, "hello", 4));

}
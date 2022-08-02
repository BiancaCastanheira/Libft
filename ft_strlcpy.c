#include <string.h>

// The strlcpy() function copies the null-terminated string from src to dst (up to size characters). 
// To help prevent writing outside the bounds of the array, the strlcpy() and strlcat() functions accept 
// the full size of the destination string as a size parameter. For static buffers, this value is easily computed at compile time using 
// the sizeof() operator.

// Both functions guarantee that the destination string is null terminated for all nonzero-length buffers.
// The strlcpy() and strlcat() functions return the total length of the string they tried to create.
// or strlcpy() that is simply the length of the source;
// To check for truncation, the programmer needs to verify that the return value is less than the size parameter.
// f the resulting string is truncated, the programmer now has the number of bytes needed to store the entire string and may reallocate and recopy.
// Neither strlcpy() nor strlcat() zero-fill their destination strings (other than the compulsory null byte to terminate the string). 
// This results in performance close to that of strcpy() and much better than strncpy() [Miller 99].

static size_t	ft_strlen(const char *s)
{
	int	lenght;

	lenght = 0;
	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srcLenght;
	size_t	i;

	srcLenght = ft_strlen(src);
	i = 0;

		while (i < (dstsize -1) && src[i] != '\0')
		{
			dst[1] = src[1];
			i++;
		}
		dst[i] = '\0';

	return (srcLenght);
}

#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char src[] = "42424242424242424242424242424242424242424424242424242424242424424242424242424242442424242424242424242424242424242442424242424242424242424242424242424242424244242424242424242424244242424242424242424424242424242424242424242424242424424242424242424242424242424242424242424242442424242424242424242442424242424242424244242424242424242424242424242424244242424242424242424242424242424242424242424424242424242424242424424242424242424242442424242424242424242424242424242442424242424242424242424242424242424242424244242424242424242424244242424242424242424424242424242424242424242424242424424242424242424242424242424242424242424242442424242424242424242442424242424242424244242424242424242424242424242424244242424242424242424242424242424242424242424424242424242424242424424242424242424242442424242424242424242424242424242442";
	char dst[2];

    int ft;
	int test;

	ft = ft_strlcpy(dst, src,  0);
	printf("Result ft_strlcpy - lenght of src: %d \n", ft);

	test = strlcpy(dst, src,  0);
	printf("Function default value of strlcpy - lenght of src: %d \n", test);
}
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	int	s;
	int	r;

	s = -1;
	while (++s <= 13)
	{
		char	src[5] = "casa";
		char	dst[9] = "amor";
		if (s < 1)
		{
			printf("src: %s | dst: %s\n", src, dst);
			printf("r = strlcat(dst, src, size)\n");
		}
		r = strlcat(dst, src, s);
		printf("size: %d | src: %s | dst: %s | return: %d\n", s, src, dst, r);
	}
	return 0;
}

/* src: casa | dst: amor
r = strlcat(dst, src, size)
size: 0 | src: casa | dst: amor | return: 4
size: 1 | src: casa | dst: amor | return: 5
size: 2 | src: casa | dst: amor | return: 6
size: 3 | src: casa | dst: amor | return: 7
size: 4 | src: casa | dst: amor | return: 8
size: 5 | src: casa | dst: amor | return: 8
size: 6 | src:  | dst: amorc | return: 8
size: 7 | src: a | dst: amorca | return: 8
size: 8 | src: as | dst: amorcas | return: 8
size: 9 | src: asa | dst: amorcasa | return: 8
size: 10 | src: asa | dst: amorcasa | return: 8
size: 11 | src: asa | dst: amorcasa | return: 8
size: 12 | src: asa | dst: amorcasa | return: 8
size: 13 | src: asa | dst: amorcasa | return: 8 */
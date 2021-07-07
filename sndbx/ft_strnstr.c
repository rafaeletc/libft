#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int			control_var;
	int			count;
	const char	*big_init;

	count = 1;
	big_init = big;
	control_var = 0;
	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0' && len > 1 && *little != '\0')
	{
		if (*big == *little)
		{
			control_var = 1;
			little++;
			count++;
		}
		else
			control_var = 0;
		big++;
		len--;
	}
	if (control_var == 1)
		return ((char *)big_init + count);
	return (0);
}

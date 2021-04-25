#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*s;
	int		i;

	i = 0;
	if (!(s = (char*)malloc(strlen(str) + 1)))
		return (0);
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

int main()
{
	char	str[100001];
	int		cmdnum;
	char 	*ptr;
	char	cmd[3];
	int		j=0;
	char	*temp;

	scanf("%s", str);
	ptr = &str[strlen(str)];
	scanf("%d", &cmdnum);
	for (int i = 0; i <= cmdnum; i++)
	{
		gets(cmd);
		if (*cmd == 'L' && ptr != str)
			ptr--;
		if (*cmd == 'D' && *ptr != '\0')
			ptr++;
		if (*cmd == 'B' && ptr != str)
		{
			temp = strdup(ptr--);
			j = 0;
			while (temp[j])
			{
				ptr[j] = temp[j];
				j++;
			}
			ptr[j] = '\0';
		}
		if (*cmd == 'P')
		{
			temp = strdup(ptr);
			*ptr++ = cmd[2];
			j = 0;
			while (temp[j])
			{
				ptr[j] = temp[j];
				j++;
			}
			ptr[j] = '\0';
		}
	}
	printf("%s", str);
	return 0;
}
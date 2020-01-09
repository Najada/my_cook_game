/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** my_strcat
*/

# include <cook.h>

char    *my_strcat(char *dest , char const * src)
{
	int     i;
	int     j;

	i = my_strlen(dest);
	for (j = 0 ; src[j] != '\0' ; j++)
		dest[i + j] = src[j];
	dest[i+ j] = '\0';
	return (dest);
}

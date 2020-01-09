/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** my_cook
*/

# include <cook.h>
# include <string.h>
# include <unistd.h>

int	my_strlen(char const *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i = i + 1;
	return (i);
}

char	*my_strdup(char *line)
{
	char	*new_line;
	int	i;

	if (line == NULL || line[0] == '\0')
		return (NULL);
	if ((new_line = malloc(sizeof(*new_line) * \
		my_strlen(line))) == NULL)
		return (NULL);
	for (i = 0 ; line[i] ; i++)
		new_line[i] = line[i];
	new_line[i] = '\0';
	return (new_line);
}

int	my_getnbr(char const *str)
{
	int	i;
	int	sgn;
	int	result;

	i = 0;
	sgn = 1;
	result = 0;
	while (str[i] == '-' || str[i] == '+') {
		if (str[i] == '-')
			sgn = -1 * sgn;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i]) {
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result = sgn * result;
	return (result);
}

FILE	*open_file(char const *filepath)
{
	FILE	*stream;

	stream = fopen(filepath, "r");
	if (stream == NULL)
		write(1, "Could not open file\n", 20);
	return (stream);
}

recepies_t	create_recepie_from_file(char const *filepath)
{
	FILE		*stream = open_file(filepath);
	char		*line = NULL;
	recepies_t	new;
	size_t		len;

	getline(&line, &len, stream);
	new.name = my_strdup(line);
	getline(&line, &len, stream);
	new.ingridients = my_strdup(line);
	getline(&line, &len, stream);
	new.order = my_strdup(line);
	new.order[my_strlen(new.order) - 1] = '\0';
	getline(&line, &len, stream);
	new.price = my_getnbr(line);
	getline(&line, &len, stream);
	new.time_out = my_getnbr(line);
	getline(&line, &len, stream);
	line[my_strlen(line) - 1] = '\0';
	new.t = sfTexture_createFromFile(line, NULL);
	new.s = sfSprite_create();
	my_bzero(new.expected, 256);
	free(line);
	fclose(stream);
	return (new);
}

/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** my_cook
*/

# include "events.h"
# include "utils.h"
# include "cook.h"
# include <string.h>

void	my_bzero(char *buffer, int size)
{
	int	i;

	i = 0;
	while (i < size) {
		buffer[i] = 0;
		i++;
	}
}

int	my_strcmp(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	select_ingridients(param_t *param, sfMouseButtonEvent mouse)
{
	select5(param, mouse);
	select1(param, mouse);
	select2(param, mouse);
	select3(param, mouse);
	select4(param, mouse);
}

void	reset_inventory(param_t *param)
{
	param->i->m = 0;
	param->i->n = 0;
	param->i->a = 0;
	param->i->s = 0;
	param->i->g = 0;
	param->i->t = 0;
	param->i->p = 0;
	param->i->c = 0;
	param->i->d = 0;
	param->i->o = 0;
	param->i->b = 0;
	param->i->w = 0;
	param->i->r = 0;
	param->i->z = 0;
	param->i->cook = 0;
}

void	update_inventory(param_t *param, sfMouseButtonEvent mouse)
{
	if (mouse.x >= 1609 && mouse.x <= 1709 &&
		mouse.y >= 720 && mouse.y <= 755) {
		reset_inventory(param);
		if (!my_strcmp(param->current.expected, param->current.order))
			param->money += param->current.price;
		else
			param->money -= 25;
		int a = rand() % (8 - param->unlock);
		display_time(param, score_to_string(a), 100);
		param->current = param->nextt;
		param->nextt = param->nextnext;
		param->nextnext = param->recepies[a];
		param->next = 1;
		my_bzero(param->current.expected , 256);
		sfClock_restart(param->recepies[0].c);
	}
}

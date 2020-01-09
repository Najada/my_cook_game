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

void	unlock1(param_t *param)
{
	sfVector2f p = {0, 950};

	sfSprite_setPosition(param->assets[13].sprite, p);
	if (param->money > 750 && param->money <= 1200 ) {
		param->assets[13].rec->width = 410;
		sfSprite_setTextureRect(param->assets[13].sprite,
		*param->assets[13].rec);
		param->unlock = 3;
	} else if (param->money > 1200 && param->money <= 1590) {
		param->assets[13].rec->width = 510;
		sfSprite_setTextureRect(param->assets[13].sprite,
		*param->assets[13].rec);
		param->unlock = 2;
	}
}

void	unlock2(param_t *param)
{
	sfVector2f p = {0, 950};

	sfSprite_setPosition(param->assets[13].sprite, p);
	if (param->money > 1590 && param->money <= 2301) {
		param->assets[13].rec->width = 580;
		sfSprite_setTextureRect(param->assets[13].sprite,
		*param->assets[13].rec);
		param->unlock = 1;
	} else if (param->money > 2301) {
		param->assets[13].rec->width = 690;
		sfSprite_setTextureRect(param->assets[13].sprite,
		*param->assets[13].rec);
		param->unlock = 0;
	}
}

void	unlock_recepies(param_t *param)
{
	unlock1(param);
	unlock2(param);
	sfRenderWindow_drawSprite(param->window,
	param->assets[13].sprite, NULL);
}

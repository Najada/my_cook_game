/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** my_cook
*/

# include "cook.h"
# include "events.h"

void	if_released_play(param_t *param, sfMouseButtonEvent mouse)
{
	if (mouse.x >= 1650 && mouse.x <= 1870 &&
		mouse.y >= 280 && mouse.y <= 350) {
		sfSleep(sfMilliseconds(125));
		param->state = gamePlay;
//		sfMusic_play(param->music);
		param->assets[2].rec->left = 0;
		sfSprite_setTextureRect(param->assets[2].sprite,
		*param->assets[2].rec);
	}
}

void	if_released_option(param_t *param, sfMouseButtonEvent mouse)
{
	if (mouse.x >= 1650 && mouse.x <= 1870 &&
		mouse.y >= 380 && mouse.y <= 450) {
		sfSleep(sfMilliseconds(125));
		param->state = gameRules;
	}
}

void	if_released_quit(param_t *param, sfMouseButtonEvent mouse)
{
	if (mouse.x >= 1650 && mouse.x <= 1870 &&
		mouse.y >= 480 && mouse.y <= 550) {
		sfSleep(sfMilliseconds(150));
		sfRenderWindow_close(param->window);
	}
}

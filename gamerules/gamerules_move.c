/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** my_cook
*/

# include "cook.h"
# include "events.h"

void	if_play_option(param_t *param, sfMouseMoveEvent mouse)
{
	if (mouse.x >= 1190 && mouse.x <= 1410 &&
		mouse.y >= 800 && mouse.y <= 870)
		param->assets[2].rec->left = 280;
	else
		param->assets[2].rec->left = 0;
	sfSprite_setTextureRect(param->assets[2].sprite,
	*param->assets[2].rec);
}

void	if_quit_option(param_t *param, sfMouseMoveEvent mouse)
{
	if (mouse.x >= 1490 && mouse.x <= 1710 &&
		mouse.y >= 800 && mouse.y <= 870)
		param->assets[11].rec->left = 290;
	else
		param->assets[11].rec->left = 0;
	sfSprite_setTextureRect(param->assets[11].sprite,
	*param->assets[11].rec);
}

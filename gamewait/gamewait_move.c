/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** my_cook
*/

# include "cook.h"
# include "events.h"

void	if_play(param_t *param, sfMouseMoveEvent mouse)
{
	if (mouse.x >= 1650 && mouse.x <= 1870 &&
		mouse.y >= 280 && mouse.y <= 350)
		param->assets[2].rec->left = 280;
	else
		param->assets[2].rec->left = 0;
	sfSprite_setTextureRect(param->assets[2].sprite,
	*param->assets[2].rec);
}

void	if_option(param_t *param, sfMouseMoveEvent mouse)
{
	if (mouse.x >= 1650 && mouse.x <= 1870 &&
		mouse.y >= 380 && mouse.y <= 450)
		param->assets[12].rec->left = 290;
	else
		param->assets[12].rec->left = 0;
	sfSprite_setTextureRect(param->assets[12].sprite,
	*param->assets[12].rec);
}

void	if_quit(param_t *param, sfMouseMoveEvent mouse)
{
	if (mouse.x >= 1650 && mouse.x <= 1870 &&
		mouse.y >= 480 && mouse.y <= 550)
		param->assets[11].rec->left = 290;
	else
		param->assets[11].rec->left = 0;
	sfSprite_setTextureRect(param->assets[11].sprite,
	*param->assets[11].rec);
}


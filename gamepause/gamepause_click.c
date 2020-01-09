/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** my_cook
*/

# include "cook.h"
# include "events.h"

void	if_click_play_pause(param_t *param, sfMouseButtonEvent mouse)
{
	if (mouse.x >= 800 && mouse.x <= 1030 &&\
		mouse.y >= 550 && mouse.y <= 620)
		param->assets[10].rec->left = 285 + 285;
	else
		param->assets[10].rec->left = 0;
	sfSprite_setTextureRect(param->assets[10].sprite,\
	*param->assets[10].rec);
	sfSound_play(param->click_sound);
}

void	if_click_quit_pause(param_t *param, sfMouseButtonEvent mouse)
{
	if (mouse.x >= 1200 && mouse.x <= 1430 &&\
		mouse.y >= 550 && mouse.y <= 620)
		param->assets[13].rec->left = 295 + 295;
	else
		param->assets[13].rec->left = 0;
	sfSprite_setTextureRect(param->assets[13].sprite,\
	*param->assets[13].rec);
	sfSound_play(param->click_sound);
}

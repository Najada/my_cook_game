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

void display(param_t *param, char *str, int x, int y)
{
	sfText *text = param->text;
	sfVector2f pos1 = {x, y};

	sfText_setPosition(text, pos1);
	sfText_setString(text, str);
	sfText_setFont(text, param->default_font);
	sfText_setCharacterSize(text, 35);
	sfText_setColor(text, sfRed);
	sfRenderWindow_drawText(param->window, text, NULL);
}

void display1(param_t *param, char *str, int x, int y)
{
	sfText *text = param->text;
	sfVector2f pos1 = {x, y};

	sfText_setPosition(text, pos1);
	sfText_setString(text, str);
	sfText_setFont(text, param->default_font);
	sfText_setCharacterSize(text, 35);
	sfText_setColor(text, sfGreen);
	sfRenderWindow_drawText(param->window, text, NULL);
}

void	display_score(param_t *param)
{
	sfText *text = param->text;
	sfVector2f pos1 = {1200, 280 };

	sfText_setPosition(text, pos1);
	sfText_setString(text, RULES);
	sfText_setFont(text, param->default_font);
	sfText_setCharacterSize(text, 40);
	sfText_setColor(text, sfRed);
	sfRenderWindow_drawText(param->window, text, NULL);
}


void	display_title(param_t *param, char *str)
{
	sfText *text = param->text;
	sfVector2f pos1 = {600, 10};

	sfText_setPosition(text, pos1);
	sfText_setString(text, str);
	sfText_setFont(text, param->default_font);
	sfText_setCharacterSize(text, 60);
	sfText_setColor(text, sfRed);
	sfRenderWindow_drawText(param->window, text, NULL);
}

void	display_ing(param_t *param, char *str)
{
	sfText *text = param->text;
	sfVector2f pos1 = {600, 100};

	sfText_setPosition(text, pos1);
	sfText_setString(text, str);
	sfText_setFont(text, param->default_font);
	sfText_setCharacterSize(text, 30);
	sfText_setColor(text, sfWhite);
	sfRenderWindow_drawText(param->window, text, NULL);
}

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

void	display_time_score(param_t *param)
{
	char	*str;

	float time  = sfTime_asSeconds(sfClock_getElapsedTime(param->c));
	str = score_to_string((int)(time/3600));
	display_time(param, str, 1600);
	display_time(param, ":", 1650);
	str = score_to_string((int)(time/60));
	display_time(param, str, 1680);
	display_time(param, ":", 1750);
	int t = (int)time;
	t = t % 60;
	str = score_to_string((t));
	display_time(param, str, 1800);
	str = score_to_string(param->money);
	display_time(param, "$", 50);
	display_time(param, str, 100);
}

void	display_gamescene_sprite(param_t *param)
{
	sfVector2f po = {1400, 200};
	sfSprite_setPosition(param->assets[5].sprite, po);
	sfRenderWindow_drawSprite(param->window,
	param->assets[1].sprite, NULL);
	sfRenderWindow_drawSprite(param->window,
	param->assets[5].sprite, NULL);
}

void	update_current(param_t *param)
{
	if (param->next == 0) {
		int	a = rand() % (8 - param->unlock);
		display_time(param, score_to_string(a), 100);
		param->current = param->nextt;
		param->nextt = param->nextnext;
		param->nextnext = param->recepies[a];
		param->next = 1;
		my_bzero(param->current.expected, 256);
	}
}

void	display_current_sprite(param_t *param)
{
	sfVector2f	pos2 = {0, 280};
	sfSprite_setPosition(param->current.s, pos2);
	sfVector2f	pos3 = {0, 480};
	sfSprite_setPosition(param->nextt.s, pos3);
	sfVector2f	pos4 = {0, 680};
	sfSprite_setPosition(param->nextnext.s, pos4);
	sfRenderWindow_drawSprite(param->window,
	param->current.s, NULL);
	sfRenderWindow_drawSprite(param->window,
	param->nextt.s, NULL);
	sfRenderWindow_drawSprite(param->window,
	param->nextnext.s, NULL);
	display_title(param, param->current.name);
	display_ing(param, param->current.ingridients);
}

void	game_play(param_t *param)
{
	if (param->state == gamePlay) {
		sfRenderWindow_clear(param->window, sfBlack);
		display_gamescene_sprite(param);
		display_time_score(param);
		unlock_recepies(param);
		display_green_or_red(param);
		sfTime time = sfClock_getElapsedTime(param->recepies[0].c);
		float t = sfTime_asSeconds(time);
		if (t < param->current.time_out) {
			update_current(param);
			display_current_sprite(param);
		} else {
			sfClock_restart(param->recepies[0].c);
			param->next = 0;
		}
	}
}

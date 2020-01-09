/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** my_cook
*/

# include "cook.h"
# include "events.h"

static void	move_event(param_t *param, sfMouseMoveEvent mouse)
{
	if (param->state == gameWait) {
		if_play(param, mouse);
		if_option(param, mouse);
		if_quit(param, mouse);
	}
	if (param->state == gamePause) {
		if_move_play_pause(param, mouse);
		if_move_quit_pause(param, mouse);
	}
	if (param->state == gameRules) {
		if_play_option(param, mouse);
		if_quit_option(param, mouse);
	}
}

void	mouse_move_event(param_t *param, sfEvent event)
{
	if (event.type == sfEvtMouseMoved) {
		sfMouseMoveEvent mouse = event.mouseMove;
		sfVector2f pos = {(mouse.x - (178 / 6)), (mouse.y - (178 / 6))};
		sfSprite_setPosition(param->assets[4].sprite, pos);
		move_event(param, mouse);
	}
}

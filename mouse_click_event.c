/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** my_cook
*/

# include "cook.h"
# include "events.h"

static void	mouse_click(param_t *param, sfMouseButtonEvent mouse)
{
	if (param->state == gameWait) {
		if_click_play(param, mouse);
		if_click_option(param, mouse);
		if_click_quit(param, mouse);
	} else if (param->state == gamePause) {
		if_click_play_pause(param, mouse);
		if_click_quit_pause(param, mouse);
	}
	if (param->state == gameRules) {
		if_click_play_option(param, mouse);
		if_click_quit_option(param, mouse);
	} else if (param->state == gamePlay) {
		select_ingridients(param, mouse);
	}
}

static void	mouse_realised(param_t *param, sfMouseButtonEvent mouse)
{
	if (param->state == gameWait) {
		if_released_play(param, mouse);
		if_released_quit(param, mouse);
		if_released_option(param, mouse);
	} else if (param->state == gamePause) {
		if_released_quit_pause(param, mouse);
		if_released_play_pause(param, mouse);
	}
	if (param->state == gameRules) {
		if_released_quit_option(param, mouse);
		if_released_play_option(param, mouse);
	} else if (param->state == gamePlay)
		update_inventory(param, mouse);
}

void	mouse_click_event(param_t *param, sfEvent event)
{
	if (event.type == sfEvtMouseButtonPressed) {
		sfMouseButtonEvent mouse = event.mouseButton;
		mouse_click(param, mouse);
	} else if (event.type == sfEvtMouseButtonReleased) {
		sfMouseButtonEvent mouse = event.mouseButton;
		mouse_realised(param, mouse);
	}
}

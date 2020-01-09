/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** main function
*/

# include "utils.h"
# include "cook.h"

void	destroy_sound(param_t *param)
{
	sfSound_destroy(param->click_sound);
	sfSoundBuffer_destroy(param->soundbuffer_click);
	sfMusic_destroy(param->music);
}

int main(int argc, char **argv)
{
	param_t *param;

	if (argc != 1)
		return (84);
	(void)argv;
	param = initiate_params();
	init_recipies(param);
	param->c = sfClock_create();
	param->recepies[0].c = sfClock_create();
	game_management(param);
	destroy_assets(param);
	destroy_content(param);
	destroy_sound(param);
	return (0);
}

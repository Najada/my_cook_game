/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** utils functions
*/

# include "cook.h"
# include "utils.h"

void	init_recipies(param_t *param)
{
	param->i = malloc(sizeof(*param->i));
	param->recepies[0] = create_recepie_from_file("recepies/nachos.txt");
	param->recepies[1] = create_recepie_from_file("recepies/double.txt");
	param->recepies[2] = create_recepie_from_file("recepies/salad.txt");
	param->recepies[3] = create_recepie_from_file("recepies/pizza.txt");
	param->recepies[4] = create_recepie_from_file("recepies/lasagna.txt");
	param->recepies[5] = create_recepie_from_file("recepies/stack.txt");
	param->recepies[6] = create_recepie_from_file("recepies/pasta.txt");
	param->recepies[7] = create_recepie_from_file("recepies/crisp.txt");
	for (int i = 0; i < NB_RECEPIES ; i++)
		sfSprite_setTexture(param->recepies[i].s, param->recepies[i].t,
		sfTrue);
	param->current = param->recepies[0];
	param->nextt = param->recepies[0];
	param->nextnext = param->recepies[2];
}

assets_t *initiate_assets_struct(void)
{
	assets_t *ass = my_malloc(sizeof(assets_t) * ASSETS_CNT);

	ass->texture = NULL;
	ass->sprite = NULL;
	return (ass);
}

param_t *initiate_params(void)
{
	param_t *param = my_malloc(sizeof(param_t));
	sfVideoMode mode = {1920, 1080, 32 };
	char const *title = "My RBG";
	param->window = sfRenderWindow_create(mode, title, sfClose, NULL);
	param->state = gameWait;
	param->fixedView = sfRenderWindow_getView(param->window);
	param->text = sfText_create();
	param->click_sound = sfSound_create();
	param->soundbuffer_click =
	sfSoundBuffer_createFromFile("assets/music/Rise01.wav");
	sfSound_setBuffer(param->click_sound, param->soundbuffer_click);
	param->music = sfMusic_createFromFile("assets/music/music_9.wav");
	sfRenderWindow_setFramerateLimit(param->window, 60);
	sfRenderWindow_setMouseCursorVisible(param->window, sfFalse);
	param->assets = initiate_assets_struct();
	initiate_assets(param);
	param->money = 0;
	param->next = 0;
	param->unlock = 4;
	return (param);
}

sfIntRect *configure_rect(int left, int top, int width, int height)
{
	sfIntRect *rec = my_malloc(sizeof(sfIntRect));

	rec->left = left;
	rec->top = top;
	rec->width = width;
	rec->height = height;
	return (rec);
}

void destroy_content(param_t *param)
{
	sfRenderWindow_destroy(param->window);
	sfText_destroy(param->text);
	free(param);
}

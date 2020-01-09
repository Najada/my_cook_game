/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** my_cook
*/

# include "utils.h"

static void	configure1(assets_t *ass)
{
	ass[0].rec = ass[3].rec = ass[5].rec = ass[8].rec = ass[10].rec  = NULL;
	ass[0].texture = sfTexture_createFromFile("assets/img/gw.jpg",NULL);
	ass[1].rec = configure_rect(0, 0, 1920, 1020);
	ass[1].texture = sfTexture_createFromFile("assets/img/gp.png",
	ass[1].rec);
	ass[2].rec = configure_rect(0, 0, 230, 87);
	ass[2].texture = sfTexture_createFromFile("assets/img/play.png", NULL);
	ass[3].texture = sfTexture_createFromFile("assets/img/btn.png", NULL);
	ass[4].rec = configure_rect(0, 0, 357, 357);
	ass[4].texture = sfTexture_createFromFile("assets/img/try.png", NULL);
	ass[5].texture = sfTexture_createFromFile("assets/img/duck.png", NULL);
	ass[6].rec = configure_rect(0, 0, 183, 45);
	ass[6].texture = sfTexture_createFromFile("assets/img/duck.png", NULL);
}

static void	configure2(assets_t *ass)
{
	ass[7].rec = configure_rect(0, 0, 134, 37);
	ass[7].texture = sfTexture_createFromFile("assets/img/sprite.png", NULL);
	ass[8].texture = sfTexture_createFromFile("assets/img/cook.png", NULL);
	ass[9].rec = configure_rect(0, 200, 1024, 576);
	ass[9].texture = sfTexture_createFromFile("assets/img/sprite.png", NULL);
	ass[10].rec = configure_rect(0, 0, 500, 150);
	ass[10].texture = sfTexture_createFromFile("assets/img/sprite.png", NULL);
	ass[11].rec = configure_rect(0, 0, 230, 87);
	ass[11].texture = sfTexture_createFromFile("assets/img/quit.png", NULL);
	ass[12].rec = configure_rect(0, 0, 230, 87);
	ass[12].texture = sfTexture_createFromFile("assets/img/o.png", NULL);
	ass[13].rec = configure_rect(0, 0, 320, 50);
	ass[13].texture = sfTexture_createFromFile("assets/img/tree.png", NULL);
}

assets_t *configure_assets(param_t *param)
{
	assets_t *ass = param->assets;
	configure1(ass);
	configure2(ass);
	param->default_font = sfFont_createFromFile("assets/img/default.otf");
	param_textures(ass);
	return (ass);
}

/*
** EPITECH PROJECT, 2017
** Project Name
** File description:
** ext_utils functions
*/

# include "utils.h"

void param_textures(assets_t *ass)
{
	sfTexture_setSmooth(ass[2].texture, sfTrue);
	sfTexture_setSmooth(ass[3].texture, sfTrue);
	sfTexture_setSmooth(ass[4].texture, sfTrue);
	sfTexture_setSmooth(ass[5].texture, sfTrue);
}

void initiate_assets(param_t *param)
{
	assets_t *ass = configure_assets(param);

	for (int i = 0; i < ASSETS_CNT; i++) {
		ass[i].sprite = sfSprite_create();
		sfSprite_setTexture(ass[i].sprite, ass[i].texture, sfTrue);
	}
	sfSprite_setTextureRect(ass[2].sprite, *ass[2].rec);
	sfSprite_setTextureRect(ass[10].sprite, *ass[10].rec);
	sfSprite_setTextureRect(ass[11].sprite, *ass[11].rec);
	sfSprite_setTextureRect(ass[12].sprite, *ass[12].rec);
	sfSprite_setTextureRect(ass[13].sprite, *ass[13].rec);
	param->assets = ass;
}

void destroy_assets(param_t *param)
{
	for (int i = 0; i < ASSETS_CNT; i++) {
		sfTexture_destroy(param->assets[i].texture);
		sfSprite_destroy(param->assets[i].sprite);
		if (param->assets[i].rec != NULL)
			free(param->assets[i].rec);
	}
	free(param->assets);
}

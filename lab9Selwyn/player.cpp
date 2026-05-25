#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include <allegro5\allegro_image.h>
#include "player.h"

// Tyler Selwyn - destructor destroys all 5 kirby bitmaps
player::~player()
{
	for (int i = 0; i < 5; i++)
		al_destroy_bitmap(images[i]);
}

// Tyler Selwyn - constructor loads all kirby damage images into array
player::player(int HEIGHT)
{
	images[0] = al_load_bitmap("Kirby.png");   // full health
	images[1] = al_load_bitmap("kirby1.png");  // damage state 1
	images[2] = al_load_bitmap("kirby2.png");  // damage state 2
	images[3] = al_load_bitmap("kirby3.png");  // damage state 3
	images[4] = al_load_bitmap("kirby4.png");  // damage state 4
	damageIndex = 0;
	x = 20;
	y = HEIGHT / 2;
	lives = 5;
	speed = 7;
	boundx = al_get_bitmap_width(images[0]);
	boundy = al_get_bitmap_height(images[0]);
	score = 0;
}

// Tyler Selwyn - draws the current kirby image based on damage index
void player::DrawPlayer()
{
	al_draw_bitmap(images[damageIndex], x, y, 0);
}

void player::MoveUp()
{
	y -= speed;
	if (y < 0)
		y = 0;
}

// Tyler Selwyn - fixed bottom collision by subtracting bitmap height
void player::MoveDown(int HEIGHT)
{
	y += speed;
	if (y > HEIGHT - boundy)
		y = HEIGHT - boundy;
}

void player::MoveLeft()
{
	x -= speed;
	if (x < 0)
		x = 0;
}

void player::MoveRight()
{
	x += speed;
	if (x > 300)
		x = 300;
}
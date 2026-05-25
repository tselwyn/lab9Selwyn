#ifndef PLAYERH
#define PLAYERH
// Tyler Selwyn - Player class for Kirby character
class player
{
public:
	player(int HEIGHT);
	~player();
	void DrawPlayer();
	void MoveUp();
	void MoveDown(int HEIGHT);
	void MoveLeft();
	void MoveRight();
	int getBoundX() { return boundx; }
	int getBoundY() { return boundy; }
	int getX() { return x; }
	int getY() { return y; }
	int getLives() { return lives; }
	int getScore() { return score; }
	int getDamageIndex() { return damageIndex; }
	void addScore() { score++; }
	void removeLife() { if (lives > 0) { lives--; damageIndex++; } } // Tyler Selwyn - safety check to prevent array out of bounds
private:
	int x;
	int y;
	int lives;
	int speed;
	int boundx;
	int boundy;
	int score;
	ALLEGRO_BITMAP* images[5]; // Tyler Selwyn - array for kirby damage states
	int damageIndex; // Tyler Selwyn - tracks which kirby image to display
};
#endif
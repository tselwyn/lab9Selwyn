#ifndef PLAYERH
#define PLAYERH
class player
{
public:
	player(int HEIGHT);
	~player();
	void addScore() { score++; }
	int getScore() { return score; }
	void DrawPlayer();
	void MoveUp();
	void MoveDown(int HEIGHT);
	void MoveLeft();
	void MoveRight();
	int getBoundX() { return boundx; }
	int getBoundY() { return boundy; }
	int getX() { return x; }
	int getY() { return y; }
	int getDamageIndex() { return damageIndex; }
	void removeLife() { lives--; damageIndex++; }
private:
	int x;
	int y;
	int lives;
	int speed;
	int boundx;
	int boundy;
	int score;
	ALLEGRO_BITMAP* images[6];
	int damageIndex;
};
#endif
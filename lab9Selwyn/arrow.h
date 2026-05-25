#include "player.h"
#include "ghost.h"

// Tyler Selwyn - Arrow class for shooting at ghosts
class Arrow
{
public:
	Arrow();
	~Arrow();
	void DrawArrow();
	void FireArrow(player& Player);
	void UpdateArrow(int WIDTH);
	void CollideArrow(ghost ghosts[], int cSize, player& Player); // Tyler Selwyn - added player ref for score tracking
private:
	int x;
	int y;
	bool live;
	int speed;
	ALLEGRO_BITMAP* image;
};
#include "Player.h"

Player::Player(string pseudo)
{
	this->name = pseudo;
}

bool Player::IsAlive()
{
	return this->lifePoint > 0;
}

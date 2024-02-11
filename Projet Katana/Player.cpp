#include "Player.h"


Player::Player(string name)
{
	this->name = name;
	this->Deck = {};
}

bool Player::IsAlive()
{
	return this->lifePoint > 0;
}



void Player::AddCardDeck(Card* card)
{
	this->Deck->push_back(card);
}

void Player::GiveHp()
{
}

void Player::DisplayDeck()
{
}

void Player::RemoveCardDeck(int i)
{
	this->Deck->erase(this->Deck->begin() + i);
}

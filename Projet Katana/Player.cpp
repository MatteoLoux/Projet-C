#include "Player.h"


Player::Player(string name)
{
	this->name = name;
	this->Deck = new vector<Card*>;
}




void Player::AddCardDeck(Card* card)
{
	this->Deck->push_back(card);
}

bool Player::GotParade()
{
	for (Card* card : (*this->Deck)) {
		if (card->GetName() == "Parade") {
			return true;
		}
	}
	return false;
}

size_t Player::findIndexParade()
{
	for (size_t i = 0; i < this->Deck->size(); i++) {
		if ((*this->Deck)[i]->GetName() == "Parade") {
			return i;
		}
	}
	return -1;
}

bool Player::IsGrounded()
{
	return this->lifePoint < 1 || this->Deck->size()==0;
}

void Player::TakeDamage(int damage)
{
	this->lifePoint -= damage;
}

void Player::DisplayDeck()
{
	for (Card* carte : *this->Deck) {
		carte->Display();
	}
}


void Player::GiveHp()
{
	if (this->personnage.GetName() == "Hanzo") {
		this->SetLifePoint(4);
	}
	else if (this->personnage.GetName() == "Ushiwaka") {
		this->SetLifePoint(4);
	}
	else if (this->personnage.GetName() == "Chiyome") {
		this->SetLifePoint(4);
	}
	else if (this->personnage.GetName() == "Hideyoshi") {
		this->SetLifePoint(4);
	}
	else if (this->personnage.GetName() == "Ginchiyo") {
		this->SetLifePoint(4);
	}
	else if (this->personnage.GetName() == "Goemon") {
		this->SetLifePoint(5);
	}
	else if (this->personnage.GetName() == "Nobunaga") {
		this->SetLifePoint(5);
	}
	else if (this->personnage.GetName() == "Tomoe") {
		this->SetLifePoint(5);
	}
	else if (this->personnage.GetName() == "Ieyasu") {
		this->SetLifePoint(5);
	}
	else if (this->personnage.GetName() == "Benkei") {
		this->SetLifePoint(5);
	}
	else if (this->personnage.GetName() == "Musashi") {
		this->SetLifePoint(5);
	}
	else if (this->personnage.GetName() == "Kojiro") {
		this->SetLifePoint(5);
	}


}




void Player::RemoveCardDeck(int i)
{
	this->Deck->erase(this->Deck->begin() + i);
}



#include "Player.hpp"

Player::Player(std::string name) 
	:name_(name), score_(0) {}

std::string Player::GetName()
{
	return name_;
}

int Player::GetScore()
{
	return score_;
}

void Player::UpdateScore(int points)
{
	score_ += points;
}



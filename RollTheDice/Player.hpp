#pragma once

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <Windows.h>
#include <string>

class Player
{
public:
	Player(std::string name);

	std::string GetName();

	int GetScore();

	void UpdateScore(int points);

private:
	std::string name_;
	int score_;
};

#endif // !PLAYER_HPP
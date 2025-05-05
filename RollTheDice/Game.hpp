#pragma once

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Die.hpp"
#include "Player.hpp"

class Game
{
public:
	Game(std::string playerName1, std::string playerName2, int winScore);
	
	void SwitchPlayer();

	void PlayRound();

	bool IsGameOver();

	Player* GetWinner();

	void PlayGame();

private:
	Player player1_;
	Player player2_;
	Player* currentPlayer_;
	Die die_;
	int winScore_;
};

#endif // !PLAYER_HPP
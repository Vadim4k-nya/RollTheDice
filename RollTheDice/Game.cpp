#include "Game.hpp"

Game::Game(std::string playerName1, std::string playerName2, int winScore)
    :player1_(playerName1), player2_(playerName2), winScore_(winScore)
{
    currentPlayer_ = &player1_;
}
	
void Game::SwitchPlayer()
{
    if (currentPlayer_ == &player1_)
    {
        currentPlayer_ = &player2_;
    }
    else
    {
        currentPlayer_ = &player1_;
    }
}

void Game::PlayRound()
{
    std::cout << currentPlayer_->GetName() << " бросает кубик...\n";
    int rollResult = die_.roll();
    std::cout << "Выпало: " << rollResult << "\n\n";

    currentPlayer_->UpdateScore(rollResult);
    std::cout << currentPlayer_->GetName() << ", ваш текущий счёт: " << currentPlayer_->GetScore() << "\n";
}

bool Game::IsGameOver()
{
    return (player1_.GetScore() >= winScore_) || (player2_.GetScore() >= winScore_);
}

Player* Game::GetWinner()
{
    if (player1_.GetScore() >= winScore_)
    {
        return &player1_;
    }
    else if (player2_.GetScore() >= winScore_)
    {
        return &player2_;
    }
    return nullptr;
}

void Game::PlayGame()
{
    std::cout << "Начинаем игру!!!\n\n";

    while (!IsGameOver())
    {
        PlayRound();
        if (!IsGameOver())
        {
            SwitchPlayer();
            std::cout << "Переход хода к " << currentPlayer_->GetName() << "\n\n";
            std::cout << "Нажмите Enter чтобы продолжить...\n\n";
            system("pause");
            system("cls");
        }
    }
    
    Player* winner = GetWinner();
    if (winner)
    {
        std::cout << "Победил так называемый " << winner->GetName() << " со счётом " << winner->GetScore() << "!\n";
    }
    else
    {
        std::cout << "Что-то пошло не так...";
    }

}
#include "Game.hpp"

int main()
{
    setlocale(LC_ALL, "RU");

    Game game("игрок1", "игрок2", 10);
    game.PlayGame();
    return 0;
}
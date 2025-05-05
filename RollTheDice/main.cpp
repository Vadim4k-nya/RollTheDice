#include "Game.hpp"

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Game game("игрок1", "игрок2", 10);
    game.PlayGame();
    return 0;
}
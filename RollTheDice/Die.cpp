#include "Die.hpp"

Die::Die()
{
    std::srand(NULL);
}

int Die::roll()
{
    return (std::rand() % 6) + 1;
}
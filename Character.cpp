#include "Character.hpp"

Character::Character()
{
    name = "Merlin";
    life = 100;
}

Character::Character(string newName, int newLife)
{
    name = newName;
    life = newLife;
}

void Character::rename(string newName)
{
    name = newName;
}

void Character::takePotion(int lifePoints)
{
    life += lifePoints;
}

void Character::display()
{
    cout << name << " est un personnage avec " << life << " points de vie." << endl;
}

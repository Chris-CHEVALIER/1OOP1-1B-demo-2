#include "Character.hpp"

class Wizard : public Character
{
private:
    int mana;
    string spell;

public:
    Wizard();
    Wizard(string newName, int newLifePoints, int newMana, string newSpell);
    void castASpell();
    void takeManaPotion(int manaPoints);
    void display();
};
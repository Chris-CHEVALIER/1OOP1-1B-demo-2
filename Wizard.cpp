#include "Wizard.hpp"

Wizard::Wizard()
{
    mana = 120;
    spell = "Boule de feu";
}

Wizard::Wizard(string newName, int newLifePoints, int newMana, string newSpell) : Character(newName, newLifePoints)
{
    mana = newMana;
    spell = newSpell;
}

void Wizard::castASpell()
{
    cout << name << " lance un sort !" << endl;
}

void Wizard::takeManaPotion(int manaPoints)
{
    mana += manaPoints;
}

void Wizard::display()
{
    // cout << name << " est un personnage avec " << life << " points de vie." << endl;
    Character::display();
    cout << "C'est un mage avec " << mana << " points de magie et le sort '" << spell << "'" << endl;
}
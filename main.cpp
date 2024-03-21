#include "Character.cpp"
#include "Wizard.cpp"

int main()
{
    Character merlin;
    Wizard gandalf("Gandalf", 200, 150, "Vous ne passerez pas");
    merlin.display();
    gandalf.display();

    return 0;
}
#include <iostream>

// CLASSES, METHODS, CONSTRUCTORS, ACCESS SPECIFIERS, INHERITANCE, EXECPTIONS


//declaring WARRIOR class
class Warrior {
    private: 
    int kd;
    std::string mantra;
    public: 
    std::string name;
    int level;
    protected: 
   int classNumber = 5;
    
};
//declaring MAGE class

class Mage {
    public:
    int level;
    std::string name;
    //adding a method and defining inside class.
    void basicSpell() {
        std::cout << "ABRACADABRA!";
    };
    int specialSpell(int damageScaler);
};


//defining the special spell method outside class definition.
int Mage::specialSpell(int damageScaler) {
    int damageLvl;
    int manaCost;
    std::cout << "select a casting power level(1-10): ";
    std::cin >> damageLvl;
    manaCost = damageLvl * 10;
    
    std::cout << "you dealt ";
    std::cout << damageLvl * damageScaler;
    std::cout << " damage" << "\n" << "cost you " << manaCost << " mana." << "\n";
    return 0;
    
}
//inheritance...derived the assassin from the warrior. 
//constructor with param as well.
 class Assassin: public Warrior {
    public: 
    int level = 750;
    std::string weapon = "dagger";
    Assassin(std::string name) {
        //this constructor will just say what weapon and level it has.
        std::cout << "the assassin called " << name << " carries a " << weapon << "." << "\n";
    };
  };


//==================================MAIN=======================================================
int main() {
    //creating the class object
    Warrior samurai;
    samurai.name = "Yasuo";
    samurai.level = 500;
    //creating a wizard of the MAGE class
    Mage wizard;
    wizard.name = "Gandalf";
    wizard.level = 1000;
  // INHERITANCE 
 Assassin ninja("Shen");

 
    //creating another mage..
    Mage darkWizard;
    darkWizard.name = "Sauron";
    darkWizard.level = 1000;
    darkWizard.specialSpell(3);
    //testing outputs...
    //wizard name and spell invoked
    std::cout << wizard.name << " casts a powerful spell..." << "\n";
    wizard.basicSpell(); std::cout << "\n";
    //samurai name and level
    std::cout << "name: " << samurai.name << "\n" << "level: " << samurai.level;
    
    return 0;
}
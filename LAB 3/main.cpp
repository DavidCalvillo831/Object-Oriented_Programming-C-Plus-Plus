#include "RPG.h"
#include <iostream>
using namespace std; 

int main() {

RPG character1; 

RPG character2("Archer", 80, 15 , 5, "archer"); 

cout << "Character 1 Name: " <<character1.getName() <<endl; 
cout << "Character 1 Health: " << character1.getHealth() <<endl; 
cout << "Character 1 Defense: " <<character1.getDefense() <<endl; 
cout << "Character 1 Strength: " <<character1.getStrength() <<endl; 

cout << "Character 2 Name: " <<character2.getName() <<endl; 
cout << "Character 2 Health: " <<character2.getHealth() <<endl; 
cout << "Character 2 Defense: " <<character2.getDefense() <<endl; 
cout << "Character 2 Strength: " <<character2.getStrength() <<endl; 

//TESTIG FOR THE IS ALIVE N UPDATE ON THE HEALTH 

cout << "Is Character 1 still alive: "<<(character1.isAlive() ? "YES" : "NO") <<endl; 
cout << "Is Character 2 still alive: "<<(character2.isAlive() ? "YES" : "NO") <<endl; 

cout << "Updating Character 1's Health to 0" <<endl; 
character1.updateHealth(0); 


cout << "Is Character 1 ALive after the health was updated to 0: " << (character1.isAlive() ? "YES" : "NO") <<endl; 

return 0; 











}

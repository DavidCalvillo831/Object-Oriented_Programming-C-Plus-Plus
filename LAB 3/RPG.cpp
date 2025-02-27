#include "RPG.h"
//constructors 
RPG::RPG(){

name = "NPC"; 
health = 100; 
strength = 10; 
defense = 10; 
type = "warrior"; 
skills[0] = "slash"; 
skills[1] = "parry"; 
}
RPG::RPG(string name, int health, int strength, int defense, string type){
name = name; 
health = health; 
strength = strength; 
defense = defense; 
type = type; 
setSkills();
}

string RPG::getName() const {
    return name; 
}

int RPG::getHealth() const{
    return health; 
}

int RPG::getStrength()const {
    return strength; 
}

int RPG::getDefense() const{
    return defense; 
}
//GIVEN FuNctions for the attacks given to the warriors

void RPG::setSkills(){
    if (type == "mage"){
        skills[0] = "fire"; 
        skills[1] = "thunder"; 
    } else if (type == "thief"){
        skills[0] = "pilfer";
        skills[1] = "jab"; 
    } else if (type == "archer"){
        skills[0] = "parry"; 
        skills[1] = "crossbow_attack"; 
    } else {
        skills[0] = "slash"; 
        skills[1] = "parry"; 
    }
}

void RPG::printAction(string skill, RPG opponent){
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str()); 


}

//new health and if is alive function

void RPG::updateHealth(int new_health){

    health = new_health; 
}

bool RPG::isAlive() const{

    return health > 0; 
}

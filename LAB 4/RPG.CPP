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
this->name = name; 
this->health = health; 
this->strength = strength; 
this->defense = defense; 
this->type = type; 
setSkills(); 
}
string RPG::getName() const {
    return name; 
}

int RPG::getHealth() const{
    return health; 
}

int RPG::getDefense()const {
    return strength; 
}

int RPG::getStrength() const{
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

void RPG::attack(RPG* opponent) {
    int damage = strength - opponent ->getDefense(); 
    if (damage < 0) damage = 0; 

    int new_health = opponent -> getHealth() - damage; 
    if (new_health < 0 ) new_health = 0; 
    
    opponent -> updateHealth(new_health); 
    cout << name << " attacks " << opponent ->getName()<<" for " << damage << "damage"<<endl; 
}

void RPG::useSkill(RPG* opponent) {
    for (int i = 0; i < SKILL_SIZE; i++){
        printf("Skill %i: %s\n", i, skills[i].c_str());
    }
     int chosen_skill_index; 
     cout <<"Choose a skill: Enter a 0 or 1\n";
     cin >> chosen_skill_index; 
    string chosen_skill = skills[chosen_skill_index]; 
    printAction(chosen_skill, *opponent); 
    attack(opponent);
}
//new health and if is alive function

void RPG::updateHealth(int new_health){

    health = new_health; 
}

bool RPG::isAlive() const{

    return health > 0; 
}

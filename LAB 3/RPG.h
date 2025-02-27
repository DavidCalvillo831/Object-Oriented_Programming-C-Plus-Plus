#define RPG_H

#include <string>

#include namespace std; 

const int SKILL_SIZE = 2; 

class RPG {

    public: 
            RPG(); 
            RPG(string name, int health, int strength, int defense, string type);

            void setSkills(); 
            void printAction(string action, RPG target); 
            void updateHealth(int amount); 
            void attack(RPG* opponent);
            void useSkill(RPG* opponent); 

            bool isAlive() const; 

            string getName() const; 

            int getHealth() const; 
            int getStrength() const; 
            int getDefense() const; 

            
            

    private:
            string name; 
            int health; 
            int strength; 
            int defense; 

            string type; 
            string skills[SKILL_SIZE]; 
};

#ifndef __GAME_H__
#define __GAME_H__

#include "ClassTypeFactory.hpp"
#include "WarriorFactory.h"
#include "MageFactory.h"
#include "Enemy.h"
#include "Loot.h"
#include <limits>

class Game {
    private: 
        ClassTypeFactory* factory; 
        Character* player; 
        int levelNum; 
        Enemy* enemy; 
	bool telegraph;
	bool smashed;
	RNG rng;
    public:
        Game(); 
        ~Game();
        void setFactory(int charType); 
        void displayOptions();
        bool isAlive(); 
        void createPlayer(); 
        void spawnEnemy(); 
        void spawnLoot();
        void startCombat(); 
        void parseWeaponOutput(std::ostream&, Weapon*); 
};

#endif

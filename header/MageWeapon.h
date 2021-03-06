#ifndef __MAGE_WEAPON_H__
#define __MAGE_WEAPON_H__

#include "Weapon.hpp"

class MageWeapon: public Weapon {
    public:
        MageWeapon();
        MageWeapon(double, double); 
        ~MageWeapon(); 
        double calculateDamage(double, double); 
};

#endif 

#include "Character.hpp"

Character::Character(void) : name("defualt")
{
    for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
    for (int i = 0; i < 10; i++)
        this->unequipped[i] = NULL;
	//std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const &name) : name(name)
{
    for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
    for (int i = 0; i < 10; i++)
        this->unequipped[i] = NULL;
	//std::cout << "Character parameterized constructor called" << std::endl;
}

Character::Character(Character const &other) //: name(other.name)
{
    for (int i = 0; i < 4; i++) // initialization cuz of deleting random value in copy assig op
        this->inventory[i] = NULL;
    for (int i = 0; i < 10; i++) // cuz of deleting random value in copy assig op
        unequipped[i] = NULL;
    *this = other;
	//std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character &other)
{
	//std::cout << "Character copy assignment Operator Called" << std::endl;
	if (this != &other)
    {
        name = other.name;
        for(int i=0 ; i<4 ; i++)
        {
            if (inventory[i])
                delete inventory[i];

            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else 
                inventory[i] = NULL;
        }
        for(int i=0 ; i<10 ; i++)
        {
            if (unequipped[i])
                delete unequipped[i];

            if (other.unequipped[i])
                unequipped[i] = other.unequipped[i]->clone();
            else 
                unequipped[i] = NULL;
        }
    }
	return (*this);
}

Character::~Character()
{
    for(int i=0 ; i<4 ; i++)
    {
        if (inventory[i])
            delete inventory[i];
    }
    for(int i=0 ; i<10 ; i++)
    {
        if (unequipped[i])
            delete unequipped[i];
    }
	//std::cout << "Character destructor called" << std::endl;
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    for(int i=0 ; i<4 ; i++)
    {
        if(inventory[i] == NULL)
        {
            inventory[i] = m;
            std::cout << name << " equips " << m->getType() << " in slot " << i << " of his inventory " << std::endl;       
            return;
        }
    }
    std::cout << name << " cannot equip " << m->getType() << " cuz his inverntory is full " << std::endl;
    delete m;
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
    {
        std::cout << name << " unequips slot number " << idx << " of his inventory " << std::endl;
        for(int i=0 ; i<10 ; i++)
        {
            if(unequipped[i] == NULL)
            {
                unequipped[i] = inventory[idx];
                break;
            }
        }
        inventory[idx] = NULL;       
    }
    else 
        std::cout << name << " unequips nothing "<< std::endl;
}

void Character::use(int idx, ICharacter& target)

{
    if (idx >= 0 && idx < 4 && inventory[idx])
    {
        inventory[idx]->use(target);
        std::cout << name << " uses slot number " << idx << " of his inventory on target " 
        << target.getName() << " (" << inventory[idx]->getType() << ") " << std::endl;
    }
    else
        std::cout << name << " doesn't use anything and does nothing to "  << target.getName() << std::endl;
}

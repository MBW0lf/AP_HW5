#ifndef SUB_INGREDIENTS_H
#define SUB_INGREDIENTS_H
#include "ingredient.h"

/////Cinnamon///////////////////////////////////////////////////
class Cinnamon : public Ingredient
{
public:
    Cinnamon(size_t units) : Ingredient{5, units}
    {
        this->name = "Cinnamon";
    }

    virtual std::string get_name() {return this->name;}
};
/////Chocolate///////////////////////////////////////////////////
class Chocolate : public Ingredient
{
public:
    Chocolate(size_t units) : Ingredient{5, units}
    {
        this->name = "Chocolate";
    }

    virtual std::string get_name() {return this->name;}
};
/////Sugar///////////////////////////////////////////////////
class Sugar : public Ingredient
{
public:
    Sugar(size_t units) : Ingredient{1, units}
    {
        this->name = "Sugar";
    }

    virtual std::string get_name() {return this->name;}
};
/////Cookie//////////////////////////////////////////////////
class Cookie : public Ingredient
{
public:
    Cookie(size_t units) : Ingredient{10, units}
    {
        this->name = "Cookie";
    }

    virtual std::string get_name() {return this->name;}
};
/////Espresso///////////////////////////////////////////////////
class Espresso : public Ingredient
{
public:
    Espresso(size_t units) : Ingredient{15, units}
    {
        this->name = "Espresso";
    }

    virtual std::string get_name() {return this->name;}
};
/////Milk///////////////////////////////////////////////////
class Milk : public Ingredient
{
public:
    Milk(size_t units) : Ingredient{10, units}
    {
        this->name = "Milk";
    }

    virtual std::string get_name() {return this->name;}
};
/////MilkFoam///////////////////////////////////////////////////
class MilkFoam : public Ingredient
{
public:
    MilkFoam(size_t units) : Ingredient{5, units}
    {
        this->name = "MilkFoam";
    }

    virtual std::string get_name() {return this->name;}
};
/////Water///////////////////////////////////////////////////
class Water : public Ingredient
{
public:
    Water(size_t units) : Ingredient{1, units}
    {
        this->name = "Water";
    }

    virtual std::string get_name() {return this->name;}
};

#endif // SUB_INGREDIENTS_H
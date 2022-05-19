#include "mocha.h"
#include "sub_ingredients.h"

//////////////////////////////////////////////////////////
Mocha::Mocha()
{
    side_items.clear();
    name = "Mocha";
    ingredients.push_back(new Espresso{2});
    ingredients.push_back(new Milk{2});
    ingredients.push_back(new MilkFoam{1});
    ingredients.push_back(new Chocolate{1});
}
//////////////////////////////////////////////////////////
Mocha::Mocha(const Mocha& cap)
{
    side_items = cap.side_items;
    name = cap.name;
    ingredients = cap.ingredients;
}
//////////////////////////////////////////////////////////
void Mocha::operator=(const Mocha& cap)
{
    side_items = cap.side_items;
    name = cap.name;
    ingredients = cap.ingredients;
}
//////////////////////////////////////////////////////////
double Mocha::price()
{
    double pr{0};
    for(const auto& i : ingredients)
        pr += i->price();
    for(const auto& i : side_items)
        pr += i->price();
    return pr;
}
//////////////////////////////////////////////////////////
std::string Mocha::get_name()
{   
    return name;
}
//////////////////////////////////////////////////////////
void Mocha::add_side_item(Ingredient* side)
{   
    side_items.push_back(side);
}
//////////////////////////////////////////////////////////
std::vector<Ingredient*>& Mocha::get_side_items()
{
    return side_items;
}
//////////////////////////////////////////////////////////
Mocha::~Mocha()
{
    for(auto& i : side_items)
    {
        i = nullptr;
        delete i;
    }
    side_items.clear();
}
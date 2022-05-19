#include "cappuccino.h"
#include "sub_ingredients.h"

//////////////////////////////////////////////////////////
Cappuccino::Cappuccino()
{
    side_items.clear();
    name = "Cappuccino";
    ingredients.push_back(new Espresso{2});
    ingredients.push_back(new Milk{2});
    ingredients.push_back(new MilkFoam{1});
}
//////////////////////////////////////////////////////////
Cappuccino::Cappuccino(const Cappuccino& cap)
{
    side_items = cap.side_items;
    name = cap.name;
    ingredients = cap.ingredients;
}
//////////////////////////////////////////////////////////
void Cappuccino::operator=(const Cappuccino& cap)
{
    side_items = cap.side_items;
    name = cap.name;
    ingredients = cap.ingredients;
}
//////////////////////////////////////////////////////////
double Cappuccino::price()
{
    double pr{0};
    for(const auto& i : ingredients)
        pr += i->price();
    for(const auto& i : side_items)
        pr += i->price();
    return pr;
}
//////////////////////////////////////////////////////////
std::string Cappuccino::get_name()
{   
    return name;
}
//////////////////////////////////////////////////////////
void Cappuccino::add_side_item(Ingredient* side)
{   
    side_items.push_back(side);
}
//////////////////////////////////////////////////////////
std::vector<Ingredient*>& Cappuccino::get_side_items()
{
    return side_items;
}
//////////////////////////////////////////////////////////
Cappuccino::~Cappuccino()
{
    for(auto& i : side_items)
    {
        i = nullptr;
        delete i;
    }
    side_items.clear();
}
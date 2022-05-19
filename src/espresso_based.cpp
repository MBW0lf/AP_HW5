#include "espresso_based.h"

//////////////////////////////////////////////////////////
EspressoBased::EspressoBased()
{
    ingredients.clear();
    name = "";
}
//////////////////////////////////////////////////////////
EspressoBased::EspressoBased(const EspressoBased& esp)
{
    ingredients = esp.ingredients;
    name = esp.name;
}
//////////////////////////////////////////////////////////
void EspressoBased::operator=(const EspressoBased& esp)
{
    ingredients = esp.ingredients;
    name = esp.name;
}
//////////////////////////////////////////////////////////
std::vector<Ingredient*>& EspressoBased::get_ingredients()
{
    return ingredients;
}
//////////////////////////////////////////////////////////
EspressoBased::~EspressoBased()
{
    for(auto& i : ingredients)
    {
        i = nullptr;
        delete i;
    }
    ingredients.clear();
}
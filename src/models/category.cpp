#include "../../include/category.h"
#include <string>

Category::Category() {}

Category::Category(std::string key_in) : key{key_in}
{
	value = "[empty]";
}

Category::Category(std::string key_in, std::string value_in)
	: key{key_in}
	, value{value_in}
{}

std::string Category::get_key() const { return key; }

void Category::set_key(std::string key_in)
{
	key = key_in;
}

std::string Category::get_value() const { return value; }

void Category::set_value(std::string value_in)
{
	value = value_in;
}

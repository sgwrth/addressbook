#include "../../include/addressbook.h"
#include "../../include/category.h"
#include <iostream>
#include <memory>

void Addressbook::add_category(std::shared_ptr<Category> category)
{
	if (key_already_exists(category->get_key()) == true) {
		std::cout << "ERROR: Key already exists!\n";
		return;
	}
	categories.push_back(category);
}

void Addressbook::list_categories() const
{
	for (const auto& element : categories) {
		std::cout << element->get_key() << "\n";
	}
}

bool Addressbook::key_already_exists(std::string key)
{
	for (const auto& element : categories) {
		if (element->get_key().compare(key) == 0) {
			return true;
		}
	}
	return false;
}


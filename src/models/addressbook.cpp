#include "../../include/addressbook.h"
#include "../../include/category.h"
#include <iostream>
#include <memory>

void Addressbook::add_category(std::shared_ptr<Category> category)
{
	categories.push_back(category);
}

void Addressbook::list_categories() const
{
	for (const auto& element : categories) {
		std::cout << element->get_key() << "\n";
	}
}

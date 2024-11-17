#include "../include/addressbook.h"
#include "../include/category.h"
#include <iostream>
#include <memory>

int main()
{
	Addressbook add;
	auto cat0 = std::make_shared<Category>();
	// cat0->set_key("First Name");
	// cat0->set_value("[empty]");
	add.add_category(cat0);
	add.list_categories();
	auto cat1 = std::make_shared<Category>("Last Name");
	add.add_category(cat1);
	add.list_categories();
	add.add_category(std::make_shared<Category>("Year of Birth"));
	add.list_categories();
	add.add_category(std::make_shared<Category>("Year of Birth"));
	return 0;
}

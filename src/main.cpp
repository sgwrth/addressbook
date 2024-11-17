#include "../include/addressbook.h"
#include "../include/category.h"
#include <iostream>
#include <memory>

int main()
{
	Addressbook add;
	auto cat0 = std::make_shared<Category>();
	cat0->set_key("First Name");
	cat0->set_value("[undefined]");
	add.add_category(cat0);
	add.list_categories();
	return 0;
}

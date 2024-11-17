#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H
#include "../include/category.h"
#include <memory>
#include <vector>

class Addressbook {
public:
	void add_category(std::shared_ptr<Category> category);
	void list_categories() const;
private:
	std::vector<std::shared_ptr<Category>> categories;
	bool key_already_exists(std::string key);
};

#endif

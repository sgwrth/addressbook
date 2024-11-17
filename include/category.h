#ifndef CATEGORY_H
#define CATEGORY_H
#include <string>

class Category {
public:
	Category();
	Category(std::string key);
	Category(std::string key, std::string value);
	std::string get_key() const;
	void set_key(std::string key);
	std::string get_value() const;
	void set_value(std::string value);
private:
	std::string key;
	std::string value;
};

#endif

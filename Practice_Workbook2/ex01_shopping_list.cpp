#include <iostream>
#include <string>
#include "ex01_shopping_list.hpp"

int main() {
    ShoppingList list;

    list.addItem("Milk");
    list.addItem("Bread");
    list.addItem("Eggs");
    list.addItem("Butter");

    list.display();
    std::cout << "Total items: " << list.count() << std::endl;
    std::cout << "removing the last item..." << std::endl;
    list.removeItem();
    list.display();

    std::cout << "Clearing the whole list..." << std::endl;
    list.clear();
    list.display();

    std::cout << list.isEmpty() << std::endl;


    return 0;
}
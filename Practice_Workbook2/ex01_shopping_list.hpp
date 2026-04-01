#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

class ShoppingList {
private:
    std::string character;
    std::vector<std::string> list;

public:
  void addItem(std::string name){
     list.push_back(name);
  }

  void display() {
    std::cout << "======The list=======" << std::endl;
    for (std::string items : list) {
      std::cout << items << std::endl;
    }
    std::cout << "===End of the list===" << std::endl;
  }

  void removeItem(){
    list.pop_back();
  }

  size_t count(){
    return list.size();
  }

  void clear() {
    for (int i = 0; i < list.size()+2; i++) {
      list.pop_back();
    }
  }

  std::string isEmpty(){
    if (list.empty()) {
      return "The list is empty!";
    }
    return "The list is not empty!";
  }
};

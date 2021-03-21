#include <iostream>

#include "array_list.hpp"
#include "linked_list.hpp"

using namespace itis;

int main(int argc, char **argv) {
  std::cout << "Hello, stranger!" << std::endl;

  auto array_list = new ArrayList();
  auto linked_list = new LinkedList;
  linked_list->Add(Element::BEAUTIFUL_FLOWERS);
  linked_list->Add(Element::CHERRY_PIE);
  linked_list->Add(Element::DRAGON_BALL);
  int index = linked_list->IndexOf(itis::Element::DRAGON_BALL);
  std:: cout << linked_list->GetSize();
  std :: cout << " " << index;



  delete array_list;
  return 0;
}
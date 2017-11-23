#include <iostream>
#include <Message.hpp>

int main() {
  std::string result;
  Message::getInstance()->write(result, "new message");
  std::cout << result << std::endl;
}

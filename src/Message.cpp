#include <iostream>
#include "Message.hpp"

Message::Message() {}

Message *Message::getInstance(){
  static Message message;
  return &message;
}

void Message::write(std::string &result, std::string input) const {
  result = input + " OK";
}

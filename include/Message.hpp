#ifndef Message_hpp
#define Message_hpp

#include <iostream>
#include <string>

class Message {
  private:
    Message();

  public:
    static Message *getInstance();

    void write(std::string &result, std::string input) const;
};

#endif

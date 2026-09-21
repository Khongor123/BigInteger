#ifndef BIGINTEGER_H
#define BIGINTEGER_H

#include <string>
#include <vector>

class BigInteger {
  public:
    BigInteger(std::string str);
    std::string ToString() const;
    void SetDigit(size_t pos, unsigned short int new_digit);
    BigInteger(const BigInteger &bi);
  private:
    
    bool is_negative = false;
    std::vector<unsigned short int> *digits = new std::vector<unsigned short int>;
};

#endif

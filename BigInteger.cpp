#include "BigInteger.h"

BigInteger::BigInteger(std::string str) {

  size_t start = 0;
  if (str[0] == '-') {
    is_negative = true;
    start = 1;
  }

  for (size_t i = start; i < str.size(); ++i) {
    digits->push_back(str[i] - '0');
  }
}

std::string BigInteger::ToString() const {
  std::string result;

  if (is_negative) {
    result.push_back('-');
  }

  for (size_t i = 0; i < digits->size(); i++) {
    result.push_back('0' + ((*digits)[i]));
  }

  return result;
}

void BigInteger::SetDigit(size_t pos, unsigned short int new_digit) {
  ((*digits)[pos]) = new_digit;
}

BigInteger::BigInteger(const BigInteger &bi) {
  this->digits->clear();
  for(size_t i = 0; i<bi.digits->size(); i++) {
    this->digits->push_back(bi.digits->at(i));
  }

  this->is_negative = bi.is_negative;
}


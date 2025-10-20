#ifndef CRYPTO_HPP
#define CRYPTO_HPP
#include <string>
#include <cctype>
class Crypto{
public:
    std::string caesarEncrypt(const std::string &text, int shift);
    std::string caesarDecrypt(const std::string &text, int shift);
};
#endif

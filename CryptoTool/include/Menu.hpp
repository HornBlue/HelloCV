#ifndef MENU_HPP
#define MENU_HPP
#include "Crypto.hpp"
#include "FileHandler.hpp"
class Menu{
public:
    void run();
    void textEncrypt();
    void textDecrypt();
    Crypto crypto;
    FileHandler fileHandler;
};
#endif
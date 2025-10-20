#include "Crypto.hpp"
#include <cctype>
#include <string>
std::string Crypto::caesarEncrypt(const std::string &text, int shift){

    std::string value;
    for(char c:text){

        if(std::isalpha(c)){
            char base=std::islower(c)?'a':'A';
            c=(c-base+shift)%26+base;
            value+=c;
        }
        else{
            value+=c;
        }
    }
return value;
}
std::string Crypto::caesarDecrypt(const std::string &text,int shift){
      return caesarEncrypt(text,26-shift);
}
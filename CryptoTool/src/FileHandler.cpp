#include "FileHandler.hpp"
#include <fstream>
#include <stdexcept>
#include <iterator>
std::string FileHandler::readfile(const std::string &filename){
    std::ifstream file(filename);
    if(!file.is_open()){
        throw std::runtime_error(std::string("da bu kai wen jian:")+filename);
    }
    return std::string(std::istreambuf_iterator<char>(file),
    std::istreambuf_iterator<char>());
}
void FileHandler::writeFile(const std::string &filename,
    const std::string &content){
      std::ofstream file(filename);
      if(!file.is_open()){
        throw std::runtime_error(std::string("da bu kai wen jian:")+filename);

      }
      if(!file){
            throw std::runtime_error(std::string("shu ru wen jian shi bai :")+filename);
         }
         file<<content;
         




    }

#ifndef FILE_HANDLER_HPP
#define FILE_HANDLER_HPP
#include <string>
class FileHandler{
public:
    std::string readfile(const std::string &filename);
    void writeFile(const std::string &filename, const std::string &content);
};
#endif
#include "FileHelper.h"

#include <fstream>
#include <iostream>

using namespace kale;

MemoryBuffer<char> FileHelper::load_file(std::string file_name) {

    std::ifstream file_stream(file_name, std::ios::in);
    std::vector<char> buffer = std::vector<char>(file_stream.tellg());

    // read file into vector by character
    if(file_stream.is_open()) {
        char c;
        while(!file_stream.eof()) {
            file_stream.get(c);
            buffer.push_back(c);
        }
    }

    // save it to membuffer
    MemoryBuffer<char> membuffer = MemoryBuffer<char>(buffer);
    return membuffer;
}

#include <vector>
#include <string>

#include "MemoryBuffer.hpp"

namespace kale {

class FileHelper {

public:
    static MemoryBuffer<char> load_file(std::string file_name);
};

}

//===----------------------------------------------------------------------===//
// This is a helper class that defines a memeory buffer
//===----------------------------------------------------------------------===//

#include <vector>

namespace kale {

template <typename BT>
class MemoryBuffer {

	std::vector<BT> buffer;

public:
    MemoryBuffer(std::vector<BT> buffer) : buffer ( buffer ) {};

    BT* buffer_start() {

        return &buffer.front();
    }

    BT* buffer_end() {

        return &buffer.back();
    }
};

}

#include "File/FileHelper.h"

using namespace kale;

int main (int argc, char *argv[]) {

    MemoryBuffer<char> buffer = FileHelper::load_file(argv[1]);

    for(char* start = buffer.buffer_start(); start <= buffer.buffer_end(); start++){
        printf("%c", *start);
    }

    return 0;
}

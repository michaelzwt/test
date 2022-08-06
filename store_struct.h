#ifndef STORE_STRUCT_H
#define STORE_STRUCT_H

#include "vector"

namespace testdb {
using Key = std::vector<uint8_t>;
using Value = std::vector<uint8_t>;

struct dbOption {
    int cacheSize = 1024;
    int flushTime = 1000;
    bool isUseCache = true;
};
} // namespace testdb
#endif
#ifndef COMMON_H
#define COMMON_H

#include <vector>

#include "store_struct.h"

namespace testdb {
class DbCommon {
public:
    static void VectorToString(const Key &src, std::string &dst);
};

} // namespace testdb
#endif
#include "common.h"

#include <string>

namespace testdb {

void DbCommon::VectorToString(const Key &src, std::string &dst)
{
    dst.clear();
    dst.assign(src.begin(), src.end());
}
}
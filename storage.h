#ifndef STORAGE_H
#define STORAGE_H

#include <vector>
#include <map>

#include "store_struct.h"

namespace testdb {
class Storage {
public:
    int Put(Key key, Value value);
    int Delete(Key key);
private:
    std::map<std::string, std::pair<Key, Value>> data_;
};

} // namespace testdb
#endif
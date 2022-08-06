#ifndef STORE_H
#define STORE_H

#include "string"
#include "store_struct.h"
#include "strore_error.h"

namespace testdb {
class TestStore {
    virtual DBStatus Open(std::string dbPath, dbOption &option);
    virtual DBStatus Close(std::string dbPath);
    virtual DBStatus Put(Key key, Value value);
    virtual DBStatus Delete(Key key);
};

} // namespace testdb
#endif
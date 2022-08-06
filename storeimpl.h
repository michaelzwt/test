#ifndef STOREIMPL_H
#define STOREIMPL_H

#include "store.h"
#include "store_struct.h"
#include "strore_error.h"

namespace testdb {
class StoreImpl : public TestStore {
public:
    DBStatus Open(std::string dbPath, dbOption &option);
    DBStatus Close(std::string dbPath);
    DBStatus Put(Key key, Value value);
    DBStatus Delete(Key key);
private:
};

} // namespace testdb
#endif
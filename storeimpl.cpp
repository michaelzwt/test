#include "storeimpl.h"

#include "strore_error.h"

namespace testdb {

DBStatus StoreImpl::Open(std::string dbPath, dbOption &option)
{
    return OK;
}

DBStatus StoreImpl::Close(std::string dbPath)
{
    return OK;
}
DBStatus StoreImpl::Put(Key key, Value value)
{
    return OK;
}

DBStatus StoreImpl::Delete(Key key)
{
    return OK;
}
} // namespace testdb
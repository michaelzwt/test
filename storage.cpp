#include "storage.h"

#include "subgroupB/common.h"
#include "subgroupB/error.h"

namespace testdb {

int Storage::Put(Key key, Value value)
{
    std::string test;
    DbCommon::VectorToString(key, test);
    data_[test] = {key, value};
    return E_OK;
}
int Storage::Delete(Key key)
{
    std::string test;
    DbCommon::VectorToString(key, test);
    auto iter = data_.find(test);
    if (iter == data_.end()) {
        return 
    }
    return E_OK;
}
}
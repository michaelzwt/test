#ifndef STOREERROR_H
#define STOREERROR_H

namespace testdb {
enum DBStatus {
    DB_ERROR = -1,
    OK = 0,
    BUSY,
    NOT_FOUND,
    INVALID_ARGS,
};
} // namespace testdb
#endif
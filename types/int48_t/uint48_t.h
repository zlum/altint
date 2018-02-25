#ifndef UINT48_T_H
#define UINT48_T_H

#include "core/integer.hpp"

#define UINT48_MAX 281474976710655

class uint48_t:
        public Integer<uint48_t, uint64_t, 6>
{
public:
    uint48_t(uint64_t val = 0);
};

#endif // UINT48_T_H

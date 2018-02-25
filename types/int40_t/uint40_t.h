#ifndef UINT40_T_H
#define UINT40_T_H

#include "core/integer.hpp"

#define UINT40_MAX 1099511627775

class uint40_t:
        public Integer<uint40_t, uint64_t, 5>
{
public:
    uint40_t(uint64_t val = 0);
};

#endif // UINT40_T_H

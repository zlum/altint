#ifndef UINT56_T_H
#define UINT56_T_H

#include "core/integer.hpp"

#define UINT56_MAX 72057594037927935

class uint56_t:
        public Integer<uint56_t, uint64_t, 7>
{
public:
    uint56_t(uint64_t val = 0);
};

#endif // UINT56_T_H

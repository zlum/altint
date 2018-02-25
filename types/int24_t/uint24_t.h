#ifndef UINT24_T_H
#define UINT24_T_H

#include "core/integer.hpp"

#define UINT24_MAX 16777215

class uint24_t:
        public Integer<uint24_t, uint64_t, 3>
{
public:
    uint24_t(unsigned val = 0);
};

#endif // UINT24_T_H

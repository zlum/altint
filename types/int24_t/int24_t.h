#ifndef INT24_T_H
#define INT24_T_H

#include "core/integer.hpp"

#define INT24_MAX 8388607
#define INT24_MIN -8388608

class int24_t:
        public Integer<int24_t, int64_t, 3>
{
public:
    int24_t(unsigned val = 0);
};

#endif // INT24_T_H

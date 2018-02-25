#ifndef INT56_T_H
#define INT56_T_H

#include "core/integer.hpp"

#define INT56_MAX 36028797018963967
#define INT56_MIN -36028797018963968

class int56_t:
        public Integer<int56_t, int64_t, 7>
{
public:
    int56_t(uint64_t val = 0);
};

#endif // INT56_T_H

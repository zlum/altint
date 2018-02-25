#ifndef INT40_T_H
#define INT40_T_H

#include "core/integer.hpp"

#define INT40_MAX 549755813887
#define INT40_MIN -549755813888

class int40_t:
        public Integer<int40_t, int64_t, 5>
{
public:
    int40_t(uint64_t val = 0);
};

#endif // INT40_T_H

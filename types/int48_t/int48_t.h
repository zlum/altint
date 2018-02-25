#ifndef INT48_T_H
#define INT48_T_H

#include "core/integer.hpp"

#define INT48_MAX 140737488355327
#define INT48_MIN -140737488355328

class int48_t:
        public Integer<int48_t, int64_t, 6>
{
public:
    int48_t(uint64_t val = 0);
};

#endif // INT48_T_H

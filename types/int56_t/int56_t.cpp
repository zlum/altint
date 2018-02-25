#include "int56_t.h"

int56_t::int56_t(uint64_t val)
{
    memcpy(_byte, &val, 7);
}

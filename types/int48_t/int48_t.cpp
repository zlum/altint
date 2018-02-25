#include "int48_t.h"

int48_t::int48_t(uint64_t val)
{
    memcpy(_byte, &val, 6);
}

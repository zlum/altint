#include "uint48_t.h"

uint48_t::uint48_t(uint64_t val)
{
    memcpy(_byte, &val, 6);
}

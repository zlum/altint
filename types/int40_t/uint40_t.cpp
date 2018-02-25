#include "uint40_t.h"

uint40_t::uint40_t(uint64_t val)
{
    memcpy(_byte, &val, 5);
}

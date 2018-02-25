#include "uint56_t.h"

uint56_t::uint56_t(uint64_t val)
{
    memcpy(_byte, &val, 7);
}

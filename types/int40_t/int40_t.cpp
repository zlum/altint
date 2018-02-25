#include "int40_t.h"

int40_t::int40_t(uint64_t val)
{
    memcpy(_byte, &val, 5);
}

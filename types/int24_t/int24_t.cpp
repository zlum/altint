#include "int24_t.h"

int24_t::int24_t(unsigned val)
{
    memcpy(_byte, &val, 3);
}

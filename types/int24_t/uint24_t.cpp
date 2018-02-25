#include "uint24_t.h"

uint24_t::uint24_t(unsigned val)
{
    memcpy(_byte, &val, 3);
}

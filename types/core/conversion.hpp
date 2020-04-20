#ifndef CONVERSION_H
#define CONVERSION_H

#include <cstdint>
#include <cstring>

template<typename Int, typename Signedness, uint8_t Size>
class Conversion
{
};

//////////////////////////////////////////////////////////////////////
////////////////////////////// UNSIGNED //////////////////////////////
//////////////////////////////////////////////////////////////////////

template<typename Int, uint8_t Size>
class Conversion<Int, uint64_t, Size>
{
public:
    inline Int& operator =(const uint64_t& val);

    inline explicit operator bool() const;
    inline explicit operator unsigned() const;
    inline explicit operator signed() const;
    inline          operator uint64_t() const;
    inline explicit operator int64_t() const;
    inline explicit operator float() const;
    inline explicit operator double() const;

protected:
    uint8_t _byte[Size];
};

template<typename Int, uint8_t Size>
Int& Conversion<Int, uint64_t, Size>::operator =(const uint64_t& val)
{
    memcpy(_byte, &val, Size);

    return static_cast<Int&>(*this);
}

template<typename Int, uint8_t Size>
Conversion<Int, uint64_t, Size>::operator bool() const
{
    bool val = false;
    unsigned(*this) == 0 ? val = false : val = true;

    return val;
}

template<typename Int, uint8_t Size>
Conversion<Int, uint64_t, Size>::operator unsigned() const
{
    return Conversion<Int, uint64_t, Size>::operator uint64_t();
}

template<typename Int, uint8_t Size>
Conversion<Int, uint64_t, Size>::operator signed() const
{
    return Conversion<Int, uint64_t, Size>::operator int64_t();
}

template<typename Int, uint8_t Size>
Conversion<Int, uint64_t, Size>::operator uint64_t() const
{
    uint64_t val = 0;
    memcpy(&val, &_byte, Size);

    return val;
}

template<typename Int, uint8_t Size>
Conversion<Int, uint64_t, Size>::operator int64_t() const
{
    int64_t val = uint64_t(*this);

    return val;
}

template<typename Int, uint8_t Size>
Conversion<Int, uint64_t, Size>::operator float() const
{
    float val = unsigned(*this);

    return val;
}

template<typename Int, uint8_t Size>
Conversion<Int, uint64_t, Size>::operator double() const
{
    double val = unsigned(*this);

    return val;
}

//////////////////////////////////////////////////////////////////////
/////////////////////////////// SIGNED ///////////////////////////////
//////////////////////////////////////////////////////////////////////

template<typename Int, uint8_t Size>
class Conversion<Int, int64_t, Size>
{
public:
    inline Int& operator =(const uint64_t& val);

    inline explicit operator bool() const;
    inline explicit operator uint8_t() const;
    inline explicit operator int8_t() const;
    inline explicit operator uint16_t() const;
    inline explicit operator int16_t() const;
    inline explicit operator unsigned() const;
    inline explicit operator signed() const;
    inline explicit operator uint64_t() const;
    inline          operator int64_t() const;
    inline explicit operator float() const;
    inline explicit operator double() const;

protected:
    uint8_t _byte[Size];
};

template<typename Int, uint8_t Size>
Int& Conversion<Int, int64_t, Size>::operator =(const uint64_t& val)
{
    memcpy(_byte, &val, Size);

    return static_cast<Int&>(*this);
}

template<typename Int, uint8_t Size>
Conversion<Int, int64_t, Size>::operator bool() const
{
    bool val = false;
    int64_t(*this) == 0 ? val = false : val = true;

    return val;
}

template<typename Int, uint8_t Size>
Conversion<Int, int64_t, Size>::operator uint8_t() const
{
    return Conversion<Int, int64_t, Size>::operator uint64_t();
}

template<typename Int, uint8_t Size>
Conversion<Int, int64_t, Size>::operator int8_t() const
{
    return Conversion<Int, int64_t, Size>::operator int64_t();
}

template<typename Int, uint8_t Size>
Conversion<Int, int64_t, Size>::operator uint16_t() const
{
    return Conversion<Int, int64_t, Size>::operator uint64_t();
}

template<typename Int, uint8_t Size>
Conversion<Int, int64_t, Size>::operator int16_t() const
{
    return Conversion<Int, int64_t, Size>::operator int64_t();
}

template<typename Int, uint8_t Size>
Conversion<Int, int64_t, Size>::operator unsigned() const
{
    return Conversion<Int, int64_t, Size>::operator uint64_t();
}

template<typename Int, uint8_t Size>
Conversion<Int, int64_t, Size>::operator signed() const
{
    return Conversion<Int, int64_t, Size>::operator int64_t();
}

template<typename Int, uint8_t Size>
Conversion<Int, int64_t, Size>::operator uint64_t() const
{
    uint64_t val = 0;
    memcpy(&val, &_byte, Size);

    return val;
}

template<typename Int, uint8_t Size>
Conversion<Int, int64_t, Size>::operator int64_t() const
{
    int64_t val = 0;

    if(_byte[Size - 1] & 0x80) memset(&val, 0xFF, sizeof(int64_t));

    memcpy(&val, _byte, Size);

    return val;
}

template<typename Int, uint8_t Size>
Conversion<Int, int64_t, Size>::operator float() const
{
    float val = int64_t(*this);

    return val;
}

template<typename Int, uint8_t Size>
Conversion<Int, int64_t, Size>::operator double() const
{
    double val = int64_t(*this);

    return val;
}

#endif // CONVERSION_H

#ifndef INTEGER_HPP
#define INTEGER_HPP

#include "operators.hpp"

#include <iostream>

template<typename Int, typename Signedness, uint8_t Size>
class Integer:
        public Operators<Int, Signedness, Size>
{
public:
    inline Int& operator ++();
    inline const Int operator ++(int);
    inline Int& operator --();
    inline const Int operator --(int);

    inline Int& operator +=(const Int& rhs);
    inline Int& operator -=(const Int& rhs);
    inline Int& operator *=(const Int& rhs);
    inline Int& operator /=(const Int& rhs);
    inline Int& operator %=(const Int& rhs);

    inline uint64_t operator >>=(const Int& rhs);
    inline uint64_t operator <<=(const Int& rhs);
    inline uint64_t operator |=(const Int& rhs);
    inline uint64_t operator &=(const Int& rhs);
    inline uint64_t operator ^=(const Int& rhs);

    friend std::ostream& operator<<(std::ostream& os, const Int& val)
    {
        return os << Signedness(val);
    }
};

template<typename Int, typename Signedness, uint8_t Size>
Int& Integer<Int, Signedness, Size>::operator ++()
{
    return operator +=(1);
}

template<typename Int, typename Signedness, uint8_t Size>
Int const Integer<Int, Signedness, Size>::operator ++(int)
{
    Int tmp = *this;
    operator +=(1);

    return tmp;
}

template<typename Int, typename Signedness, uint8_t Size>
Int& Integer<Int, Signedness, Size>::operator --()
{
    return operator -=(1);
}

template<typename Int, typename Signedness, uint8_t Size>
Int const Integer<Int, Signedness, Size>::operator --(int)
{
    Int tmp = *this;
    operator -=(1);

    return tmp;
}

template<typename Int, typename Signedness, uint8_t Size>
Int& Integer<Int, Signedness, Size>::operator +=(const Int& rhs)
{
    return Conversion<Int, Signedness, Size>::operator =(*this + rhs);
}

template<typename Int, typename Signedness, uint8_t Size>
Int& Integer<Int, Signedness, Size>::operator -=(const Int& rhs)
{
    return Conversion<Int, Signedness, Size>::operator =(*this - rhs);
}

template<typename Int, typename Signedness, uint8_t Size>
Int& Integer<Int, Signedness, Size>::operator *=(const Int& rhs)
{
    return Conversion<Int, Signedness, Size>::operator =(*this * rhs);
}

template<typename Int, typename Signedness, uint8_t Size>
Int& Integer<Int, Signedness, Size>::operator /=(const Int& rhs)
{
    return Conversion<Int, Signedness, Size>::operator =(*this / rhs);
}

template<typename Int, typename Signedness, uint8_t Size>
Int& Integer<Int, Signedness, Size>::operator %=(const Int& rhs)
{
    return Conversion<Int, Signedness, Size>::operator =(*this % rhs);
}

template<typename Int, typename Signedness, uint8_t Size>
uint64_t Integer<Int, Signedness, Size>::operator >>=(const Int& rhs)
{
    return uint64_t(Conversion<Int, Signedness, Size>::operator =
            (Signedness(this->operator >>(rhs))));
}

template<typename Int, typename Signedness, uint8_t Size>
uint64_t Integer<Int, Signedness, Size>::operator <<=(const Int& rhs)
{
    return uint64_t(Conversion<Int, Signedness, Size>::operator =
            (Signedness(this->operator <<(rhs))));
}

template<typename Int, typename Signedness, uint8_t Size>
uint64_t Integer<Int, Signedness, Size>::operator |=(const Int& rhs)
{
    return uint64_t(Conversion<Int, Signedness, Size>::operator =
            (Signedness(this->operator |(rhs))));
}

template<typename Int, typename Signedness, uint8_t Size>
uint64_t Integer<Int, Signedness, Size>::operator &=(const Int& rhs)
{
    return uint64_t(Conversion<Int, Signedness, Size>::operator =
            (Signedness(this->operator &(rhs))));
}

template<typename Int, typename Signedness, uint8_t Size>
uint64_t Integer<Int, Signedness, Size>::operator ^=(const Int& rhs)
{
    return uint64_t(Conversion<Int, Signedness, Size>::operator =
            (Signedness(this->operator ^(rhs))));
}

#endif // INTEGER_HPP

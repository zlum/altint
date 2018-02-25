#ifndef OPERATORS_HPP
#define OPERATORS_HPP

#include "conversion.hpp"

template<typename Int, typename Signedness, uint8_t Size>
class Operators:
        public Conversion<Int, Signedness, Size>
{
public:
    inline int64_t operator -() const;

    inline int64_t operator +(const Operators<Int, Signedness, Size>& rhs) const;
    inline int64_t operator -(const Operators<Int, Signedness, Size>& rhs) const;
    inline int64_t operator *(const Operators<Int, Signedness, Size>& rhs) const;
    inline int64_t operator /(const Operators<Int, Signedness, Size>& rhs) const;
    inline int64_t operator %(const Operators<Int, Signedness, Size>& rhs) const;

    inline uint64_t operator >>(const Operators<Int, Signedness, Size>& rhs) const;
    inline uint64_t operator <<(const Operators<Int, Signedness, Size>& rhs) const;
    inline uint64_t operator |(const Operators<Int, Signedness, Size>& rhs) const;
    inline uint64_t operator &(const Operators<Int, Signedness, Size>& rhs) const;
    inline uint64_t operator ^(const Operators<Int, Signedness, Size>& rhs) const;

    inline bool operator ==(const Operators<Int, Signedness, Size>& rhs) const;
    inline bool operator !=(const Operators<Int, Signedness, Size>& rhs) const;
    inline bool operator <(const Operators<Int, Signedness, Size>& rhs) const;
    inline bool operator >(const Operators<Int, Signedness, Size>& rhs) const;
    inline bool operator <=(const Operators<Int, Signedness, Size>& rhs) const;
    inline bool operator >=(const Operators<Int, Signedness, Size>& rhs) const;
};

template<typename Int, typename Signedness, uint8_t Size>
int64_t Operators<Int, Signedness, Size>::operator -() const
{
    return -(Signedness(*this));
}

template<typename Int, typename Signedness, uint8_t Size>
int64_t Operators<Int, Signedness, Size>::operator +(const Operators<Int, Signedness, Size>& rhs) const
{
    return *this + Signedness(rhs);
}

template<typename Int, typename Signedness, uint8_t Size>
int64_t Operators<Int, Signedness, Size>::operator -(const Operators<Int, Signedness, Size>& rhs) const
{
    return *this - Signedness(rhs);
}

template<typename Int, typename Signedness, uint8_t Size>
int64_t Operators<Int, Signedness, Size>::operator *(const Operators<Int, Signedness, Size>& rhs) const
{
    return *this * Signedness(rhs);
}

template<typename Int, typename Signedness, uint8_t Size>
int64_t Operators<Int, Signedness, Size>::operator /(const Operators<Int, Signedness, Size>& rhs) const
{
    return *this / Signedness(rhs);
}

template<typename Int, typename Signedness, uint8_t Size>
int64_t Operators<Int, Signedness, Size>::operator %(const Operators<Int, Signedness, Size>& rhs) const
{
    return *this % Signedness(rhs);
}

template<typename Int, typename Signedness, uint8_t Size>
uint64_t Operators<Int, Signedness, Size>::operator >>(const Operators<Int, Signedness, Size>& rhs) const
{
    return (Signedness(*this)) >> rhs;
}

template<typename Int, typename Signedness, uint8_t Size>
uint64_t Operators<Int, Signedness, Size>::operator <<(const Operators<Int, Signedness, Size>& rhs) const
{
    return (Signedness(*this)) << rhs;
}

template<typename Int, typename Signedness, uint8_t Size>
uint64_t Operators<Int, Signedness, Size>::operator |(const Operators<Int, Signedness, Size>& rhs) const
{
    return (Signedness(*this)) | rhs;
}

template<typename Int, typename Signedness, uint8_t Size>
uint64_t Operators<Int, Signedness, Size>::operator &(const Operators<Int, Signedness, Size>& rhs) const
{
    return (Signedness(*this)) & rhs;
}

template<typename Int, typename Signedness, uint8_t Size>
uint64_t Operators<Int, Signedness, Size>::operator ^(const Operators<Int, Signedness, Size>& rhs) const
{
    return (Signedness(*this)) ^ rhs;
}

template<typename Int, typename Signedness, uint8_t Size>
bool Operators<Int, Signedness, Size>::operator ==(const Operators<Int, Signedness, Size>& rhs) const
{
    return Signedness(*this) == Signedness(rhs);
}

template<typename Int, typename Signedness, uint8_t Size>
bool Operators<Int, Signedness, Size>::operator !=(const Operators<Int, Signedness, Size>& rhs) const
{
    return !this->operator ==(rhs);
}

template<typename Int, typename Signedness, uint8_t Size>
bool Operators<Int, Signedness, Size>::operator <(const Operators<Int, Signedness, Size>& rhs) const
{
    return Signedness(*this) < Signedness(rhs);
}

template<typename Int, typename Signedness, uint8_t Size>
bool Operators<Int, Signedness, Size>::operator >(const Operators<Int, Signedness, Size>& rhs) const
{
    return Signedness(*this) > Signedness(rhs);
}

template<typename Int, typename Signedness, uint8_t Size>
bool Operators<Int, Signedness, Size>::operator <=(const Operators<Int, Signedness, Size>& rhs) const
{
    return Signedness(*this) <= Signedness(rhs);
}

template<typename Int, typename Signedness, uint8_t Size>
bool Operators<Int, Signedness, Size>::operator >=(const Operators<Int, Signedness, Size>& rhs) const
{
    return Signedness(*this) >= Signedness(rhs);
}

#endif // OPERATORS_HPP

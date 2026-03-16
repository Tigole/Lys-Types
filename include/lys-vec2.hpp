#ifndef _VEC_HPP
#define _VEC_HPP 1

#include <cstdint>

namespace lys
{

template<typename T>
struct Vec2
{
    T x;
    T y;
};

using Vec2u32 = Vec2<uint32_t>;
using Vec2u16 = Vec2<uint16_t>;
using Vec2f32 = Vec2<float>;
using Vec2f64 = Vec2<double>;

}  // namespace lys

#endif  // _VEC_HPP

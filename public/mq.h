#pragma once

/**
 * mq_math.h a.k.a. mq math
*/

#define _USE_MATH_DEFINES
#include <math.h> // Must be first include in the file.

namespace mq
{
    namespace internal
    {
        constexpr float MQ_EPSILON = 1.0e-7f;
        constexpr float PI = static_cast<float>(M_PI);
        constexpr float MQ_RADIANS_PER_DEGREE = static_cast<float>(PI) / 180.f;
    }
    
    static inline bool isZero(float x) {
        return (x < internal::MQ_EPSILON) && (x > -internal::MQ_EPSILON);
    }

    template <typename T>
    float discriminantSquared(T a, T b, T c)
    {
        return b * b - 4 * a * c;
    }
} // namespace mq

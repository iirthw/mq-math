#pragma once

/**
 * mq_math.h a.k.a. mq math
*/

namespace mq
{
    namespace internal
    {
        constexpr float MQ_EPSILON = 1.0e-7f;
        constexpr float MQ_PI = 3.14159265359f;
        constexpr float MQ_RADIANS_PER_DEGREE = MQ_PI / 180.f;
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


//          Copyright John McFarlane 2021.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file ../LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#if !defined(CNL_IMPL_SCALED_POWER_IS_SCALED_TAG_H)
#define CNL_IMPL_SCALED_POWER_IS_SCALED_TAG_H

#include "../is_scaled_tag.h"
#include "declaration.h"

/// compositional numeric library
namespace cnl {
    template<int Exponent, int Radix>
    struct is_scaled_tag<power<Exponent, Radix>> : std::true_type {
    };

    namespace _impl {
        template<int Exponent, int Radix>
        struct exponent<power<Exponent, Radix>>
            : std::integral_constant<int, Exponent> {
        };

        template<int Exponent, int Radix>
        struct radix<power<Exponent, Radix>> 
        : std::integral_constant<int, Radix> {
        };
    }
}

#endif  // CNL_IMPL_SCALED_POWER_IS_SCALED_TAG_H

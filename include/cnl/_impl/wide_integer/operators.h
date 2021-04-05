
//          Copyright John McFarlane 2018.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file ../LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#if !defined(CNL_IMPL_WIDE_INTEGER_OPERATORS_H)
#define CNL_IMPL_WIDE_INTEGER_OPERATORS_H

#include "../config.h"
#include "../num_traits/to_rep.h"
#include "../ostream.h"
#include "definition.h"
#include "set_rep.h"

#if defined(CNL_IOSTREAMS_ENABLED)
#include <ostream>
#endif

/// compositional numeric library
namespace cnl {
    namespace _impl {
#if defined(CNL_IOSTREAMS_ENABLED)
        template<int Digits, typename Narrowest>
        auto& operator<<(std::ostream& out, wide_integer<Digits, Narrowest> const& value)
        {
            return out << to_rep(value);
        }
#endif
    }
}

#endif  // CNL_IMPL_WIDE_INTEGER_OPERATORS_H

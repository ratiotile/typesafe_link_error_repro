#pragma once
#include <disable_warnings.h>
#include <type_safe/strong_typedef.hpp>
#pragma warning(pop)

namespace A {
  struct PlayerId
    : type_safe::strong_typedef<PlayerId, int>
    , type_safe::strong_typedef_op::equality_comparison<PlayerId>
    , type_safe::strong_typedef_op::relational_comparison<PlayerId>
    , type_safe::strong_typedef_op::output_operator<PlayerId>
  {
    using strong_typedef::strong_typedef;
  };

}


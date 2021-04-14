
#include <A/basic_types.h>

#include <doctest_wrapper.h>


TEST_SUITE("Opponent") {
  using namespace A;

  struct Foo {
    PlayerId id;
  };
  

  TEST_CASE("Linker Error") {
    auto bar = []() {
      auto f = Foo{
        .id = PlayerId(1),
      };
    };
    bar();
  }

}
#pragma once

#include <cstdint>
#include <iosfwd>

struct uint8_char_traits;
namespace nano
{
using stream = std::basic_streambuf<uint8_t, uint8_char_traits>;
}

#pragma once

#include <cstdint>
#include <iosfwd>

struct uint8_char_traits;
namespace nano
{
class block;
enum class block_type : uint8_t;
class block_visitor;
class container_info;
enum class epoch : uint8_t;
class jsonconfig;
class mutable_block_visitor;
class network_constants;
class object_stream;
class thread_pool;
class tomlconfig;
template <typename Key, typename Value>
class uniquer;
enum class work_version;

using stream = std::basic_streambuf<uint8_t, uint8_char_traits>;
}

namespace nano::stat
{
enum class detail;
enum class dir;
}

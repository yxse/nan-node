#include <nano/lib/enum_util.hpp>
#include <nano/node/transport/traffic_type.hpp>

nano::stat::detail nano::transport::to_stat_detail (nano::transport::traffic_type type)
{
	return nano::enum_util::cast<nano::stat::detail> (type);
}
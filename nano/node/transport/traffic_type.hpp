#pragma once

#include <nano/lib/stats.hpp>

namespace nano::transport
{
/**
 * Used for message prioritization and bandwidth limits
 */
enum class traffic_type
{
	generic,
	bootstrap, // Ascending bootstrap (asc_pull_ack, asc_pull_req) traffic
};

nano::stat::detail to_stat_detail (traffic_type);
}
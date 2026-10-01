#pragma once

#include <spdlog/spdlog.h>

// --------------------------------------------------
//                      Logger
// --------------------------------------------------
/*
    * Writes messages during execution
    * Tracks program behavior live
    * Debugs and monitors performance
    * Uses spdlog for logging
*/

#define LOG_INFO(...)       SPDLOG_INFO(__VA_ARGS__)
#define LOG_WARNING(...)    SPDLOG_WARN(__VA_ARGS__)
#define LOG_ERRPR(...)      SPDLOG_ERROR(__VA_ARGS__)
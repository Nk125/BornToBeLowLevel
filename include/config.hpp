#pragma once
#include <string_view>

/**
 * @brief The number of garbage chars to print
 */
constexpr size_t garbage_quantity = 5;

/**
 * @brief Milliseconds to pause between each garbage char printed
 */
constexpr size_t ms_pause_garbage = 100;

/**
 * @brief The message to show
 */
constexpr std::string_view to_print = "Born to be low level.";
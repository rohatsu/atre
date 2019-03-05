#pragma once

#include <iostream>
#include <cstdint>
#include <exception>
#include <stdexcept>
#include <tuple>
#include <map>
#include <memory>
#include <thread>
#include <atomic>
#include <mutex>
#include <condition_variable>
#include <deque>
#include <cstring>
#include <stdexcept>
#include <vector>
#include <bitset>
#include <functional>
#include <fstream>

typedef uint8_t byte_t;
typedef int8_t sbyte_t;
typedef uint16_t word_t;
typedef int16_t sword_t;
typedef byte_t flag_t;

constexpr int MEM_SIZE = 65536;
constexpr int CYCLES_PER_SEC = 1792080;
constexpr int FRAMES_PER_SEC = 60;
constexpr int CYCLES_PER_FRAME = CYCLES_PER_SEC / FRAMES_PER_SEC;
constexpr int NUM_SCANLINES = 262;
constexpr int CYCLES_PER_SCANLINE = CYCLES_PER_FRAME / NUM_SCANLINES;

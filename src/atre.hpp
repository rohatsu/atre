#pragma once

#include <atomic>
#include <bitset>
#include <condition_variable>
#include <cstdint>
#include <cstring>
#include <deque>
#include <exception>
#include <filesystem>
#include <fstream>
#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <mutex>
#include <sstream>
#include <stdexcept>
#include <thread>
#include <tuple>
#include <unordered_set>
#include <vector>

typedef uint8_t  byte_t;
typedef int8_t   sbyte_t;
typedef uint16_t word_t;
typedef int16_t  sword_t;
typedef byte_t   flag_t;

namespace atre
{
constexpr int    MEM_SIZE            = 65536;
constexpr int    CYCLES_PER_SEC      = 1792080;
constexpr int    FRAMES_PER_SEC      = 60;
constexpr int    MILLISEC_PER_FRAME  = 1000 / FRAMES_PER_SEC;
constexpr int    CYCLES_PER_FRAME    = CYCLES_PER_SEC / FRAMES_PER_SEC;
constexpr int    TOTAL_SCANLINES     = 262;
constexpr int    CYCLES_PER_SCANLINE = CYCLES_PER_FRAME / TOTAL_SCANLINES;
constexpr int    PLAYFIELD_NARROW    = 256;
constexpr int    PLAYFIELD_NORMAL    = 320;
constexpr int    PLAYFIELD_WIDE      = 384;
constexpr int    FRAME_WIDTH         = PLAYFIELD_WIDE;
constexpr int    FRAME_HEIGHT        = TOTAL_SCANLINES;
constexpr int    VISIBLE_SCANLINES   = 240;
constexpr int    TOP_SCANLINES       = 8;
constexpr int    VBLANK_SCANLINE     = TOP_SCANLINES + VISIBLE_SCANLINES;
constexpr int    FRAME_SIZE          = FRAME_WIDTH * FRAME_HEIGHT;
constexpr int    FRAME_BYTES         = FRAME_SIZE * sizeof(uint32_t);
constexpr int    SCREEN_WIDTH        = FRAME_WIDTH;
constexpr int    SCREEN_HEIGHT       = VISIBLE_SCANLINES;
constexpr int    SCREEN_SIZE         = SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(uint32_t);
constexpr int    SCREEN_OFFSET       = SCREEN_WIDTH * TOP_SCANLINES;
constexpr int    SCREEN_SCALE        = 2;
constexpr double FRAME_TIME          = 1.0 / FRAMES_PER_SEC;
} // namespace atre

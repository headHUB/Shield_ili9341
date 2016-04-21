#pragma once
#include "Shield_ili9341.h"

static const uint8_t g_font_data[] PROGMEM =
{
  0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0xa0, 0xa0, 0xa0, 0x28, 0x28, 0xf8, 0x50, 0x50, 0xf8, 0xa0, 0xa0, 0x70, 0xa8, 0xa0, 0x70, 0x28, 0x28, 0xa8, 0x70, 0x20, 0x62, 0x00, 0x94, 0x00,
  0x94, 0x00, 0x68, 0x00, 0x0b, 0x00, 0x14, 0x80, 0x14, 0x80, 0x23, 0x00, 0x30, 0x48, 0x48, 0x30, 0x50, 0x8c, 0x88, 0x74, 0x80, 0x80, 0x80, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40,
  0x20, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x40, 0xe0, 0x40, 0xa0, 0x20, 0x20, 0xf8, 0x20, 0x20, 0x80, 0x80, 0x80, 0xe0, 0x80, 0x20, 0x20, 0x40, 0x40, 0x40, 0x40, 0x80,
  0x80, 0x70, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x20, 0x60, 0xa0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x88, 0x08, 0x08, 0x10, 0x20, 0x40, 0xf8, 0x70, 0x88, 0x08, 0x30, 0x08, 0x08, 0x88,
  0x70, 0x10, 0x30, 0x50, 0x50, 0x90, 0xf8, 0x10, 0x10, 0x78, 0x40, 0x80, 0xf0, 0x08, 0x08, 0x88, 0x70, 0x70, 0x88, 0x80, 0xf0, 0x88, 0x88, 0x88, 0x70, 0xf8, 0x10, 0x10, 0x20, 0x20, 0x40, 0x40,
  0x40, 0x70, 0x88, 0x88, 0x70, 0x88, 0x88, 0x88, 0x70, 0x70, 0x88, 0x88, 0x88, 0x78, 0x08, 0x88, 0x70, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x08,
  0x70, 0x80, 0x70, 0x08, 0xf8, 0x00, 0xf8, 0x80, 0x70, 0x08, 0x70, 0x80, 0x70, 0x88, 0x08, 0x10, 0x20, 0x20, 0x00, 0x20, 0x1f, 0x00, 0x60, 0x80, 0x4d, 0x40, 0x93, 0x40, 0xa2, 0x40, 0xa2, 0x40,
  0xa6, 0x80, 0x9b, 0x00, 0x40, 0x40, 0x3f, 0x80, 0x10, 0x28, 0x28, 0x28, 0x44, 0x7c, 0x82, 0x82, 0xf8, 0x84, 0x84, 0xfc, 0x84, 0x84, 0x84, 0xf8, 0x38, 0x44, 0x80, 0x80, 0x80, 0x80, 0x44, 0x38,
  0xf0, 0x88, 0x84, 0x84, 0x84, 0x84, 0x88, 0xf0, 0xf8, 0x80, 0x80, 0xf8, 0x80, 0x80, 0x80, 0xf8, 0xf8, 0x80, 0x80, 0xf0, 0x80, 0x80, 0x80, 0x80, 0x38, 0x44, 0x82, 0x80, 0x8e, 0x82, 0x44, 0x38,
  0x84, 0x84, 0x84, 0xfc, 0x84, 0x84, 0x84, 0x84, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x10, 0x10, 0x10, 0x10, 0x10, 0x90, 0x90, 0x60, 0x84, 0x88, 0x90, 0xb0, 0xd0, 0x88, 0x88, 0x84,
  0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xf8, 0x82, 0xc6, 0xc6, 0xaa, 0xaa, 0xaa, 0x92, 0x92, 0x84, 0xc4, 0xa4, 0xa4, 0x94, 0x94, 0x8c, 0x84, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38,
  0xf0, 0x88, 0x88, 0x88, 0xf0, 0x80, 0x80, 0x80, 0x38, 0x44, 0x82, 0x82, 0x82, 0x9a, 0x44, 0x3a, 0xf8, 0x84, 0x84, 0xf8, 0x90, 0x88, 0x88, 0x84, 0x78, 0x84, 0x80, 0x60, 0x18, 0x04, 0x84, 0x78,
  0xf8, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x78, 0x82, 0x82, 0x44, 0x44, 0x28, 0x28, 0x10, 0x10, 0x84, 0x20, 0x8a, 0x20, 0x4a, 0x40, 0x4a, 0x40,
  0x51, 0x40, 0x51, 0x40, 0x20, 0x80, 0x20, 0x80, 0x84, 0x48, 0x48, 0x30, 0x30, 0x48, 0x48, 0x84, 0x82, 0x44, 0x44, 0x28, 0x10, 0x10, 0x10, 0x10, 0x7c, 0x08, 0x10, 0x10, 0x20, 0x20, 0x40, 0xfc,
  0xc0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0, 0x80, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 0x20, 0xc0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xc0, 0x20, 0x50, 0x50, 0x88,
  0xfc, 0x80, 0x40, 0x70, 0x88, 0x78, 0x88, 0x98, 0x68, 0x80, 0x80, 0xb0, 0xc8, 0x88, 0x88, 0xc8, 0xb0, 0x70, 0x88, 0x80, 0x80, 0x88, 0x70, 0x08, 0x08, 0x68, 0x98, 0x88, 0x88, 0x98, 0x68, 0x70,
  0x88, 0xf8, 0x80, 0x88, 0x70, 0x20, 0x40, 0xe0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x68, 0x98, 0x88, 0x88, 0x98, 0x68, 0x08, 0xf0, 0x80, 0x80, 0xb0, 0xc8, 0x88, 0x88, 0x88, 0x88, 0x80, 0x00, 0x80,
  0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x90, 0xa0, 0xc0, 0xa0, 0xa0, 0x90, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xbc,
  0xd2, 0x92, 0x92, 0x92, 0x92, 0xf0, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x88, 0x88, 0x88, 0x88, 0x70, 0xb0, 0xc8, 0x88, 0x88, 0xc8, 0xb0, 0x80, 0x80, 0x68, 0x98, 0x88, 0x88, 0x98, 0x68, 0x08,
  0x08, 0xa0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x70, 0x88, 0x60, 0x10, 0x88, 0x70, 0x40, 0x40, 0xe0, 0x40, 0x40, 0x40, 0x40, 0x60, 0x88, 0x88, 0x88, 0x88, 0x98, 0x68, 0x88, 0x88, 0x50, 0x50, 0x20,
  0x20, 0x88, 0x80, 0x94, 0x80, 0x55, 0x00, 0x55, 0x00, 0x22, 0x00, 0x22, 0x00, 0x88, 0x50, 0x20, 0x20, 0x50, 0x88, 0x88, 0x88, 0x50, 0x50, 0x20, 0x20, 0x20, 0x40, 0xf8, 0x10, 0x20, 0x20, 0x40,
  0xf8, 0x20, 0x40, 0x40, 0x40, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x40, 0x20, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00,
  0xe8, 0xb0, 0x00, 0xfc, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0xfc
};

static const glyph_param g_font_info[] PROGMEM =
{
  { 0, 0, 0, 0, 0, 3 },
  { 0, 1, 8, 0, 8, 2 },
  { 8, 3, 3, 0, 8, 4 },
  { 11, 5, 8, 0, 8, 6 },
  { 19, 5, 9, 0, 8, 6 },
  { 28, 9, 8, 0, 8, 10 },
  { 44, 6, 8, 0, 8, 7 },
  { 52, 1, 3, 0, 8, 2 },
  { 55, 3, 10, 0, 8, 4 },
  { 65, 3, 10, 0, 8, 4 },
  { 75, 3, 4, 0, 8, 4 },
  { 79, 5, 5, 0, 6, 6 },
  { 84, 1, 3, 1, 1, 3 },
  { 87, 3, 1, 0, 3, 4 },
  { 88, 1, 1, 1, 1, 3 },
  { 89, 3, 8, 0, 8, 3 },
  { 97, 5, 8, 0, 8, 6 },
  { 105, 3, 8, 0, 8, 6 },
  { 113, 5, 8, 0, 8, 6 },
  { 121, 5, 8, 0, 8, 6 },
  { 129, 5, 8, 0, 8, 6 },
  { 137, 5, 8, 0, 8, 6 },
  { 145, 5, 8, 0, 8, 6 },
  { 153, 5, 8, 0, 8, 6 },
  { 161, 5, 8, 0, 8, 6 },
  { 169, 5, 8, 0, 8, 6 },
  { 177, 1, 6, 0, 6, 3 },
  { 183, 1, 8, 0, 6, 3 },
  { 191, 5, 5, 0, 6, 6 },
  { 196, 5, 3, 0, 5, 6 },
  { 199, 5, 5, 0, 6, 6 },
  { 204, 5, 8, 0, 8, 6 },
  { 212, 10, 10, 0, 8, 11 },
  { 232, 7, 8, 0, 8, 8 },
  { 240, 6, 8, 0, 8, 7 },
  { 248, 6, 8, 0, 8, 7 },
  { 256, 6, 8, 0, 8, 7 },
  { 264, 5, 8, 0, 8, 6 },
  { 272, 5, 8, 0, 8, 6 },
  { 280, 7, 8, 0, 8, 8 },
  { 288, 6, 8, 0, 8, 7 },
  { 296, 1, 8, 0, 8, 2 },
  { 304, 4, 8, 0, 8, 5 },
  { 312, 6, 8, 0, 8, 7 },
  { 320, 5, 8, 0, 8, 6 },
  { 328, 7, 8, 0, 8, 8 },
  { 336, 6, 8, 0, 8, 7 },
  { 344, 7, 8, 0, 8, 8 },
  { 352, 5, 8, 0, 8, 6 },
  { 360, 7, 8, 0, 8, 8 },
  { 368, 6, 8, 0, 8, 7 },
  { 376, 6, 8, 0, 8, 7 },
  { 384, 5, 8, 0, 8, 6 },
  { 392, 6, 8, 0, 8, 7 },
  { 400, 7, 8, 0, 8, 8 },
  { 408, 11, 8, -1, 8, 10 },
  { 424, 6, 8, 0, 8, 7 },
  { 432, 7, 8, 0, 8, 8 },
  { 440, 6, 8, 0, 8, 7 },
  { 448, 2, 10, 0, 8, 3 },
  { 458, 3, 8, 0, 8, 3 },
  { 466, 2, 10, 0, 8, 3 },
  { 476, 5, 4, 0, 8, 5 },
  { 480, 6, 1, 0, -1, 6 },
  { 481, 2, 2, 0, 8, 4 },
  { 483, 5, 6, 0, 6, 6 },
  { 489, 5, 8, 0, 8, 6 },
  { 497, 5, 6, 0, 6, 6 },
  { 503, 5, 8, 0, 8, 6 },
  { 511, 5, 6, 0, 6, 6 },
  { 517, 4, 8, 0, 8, 4 },
  { 525, 5, 8, 0, 6, 6 },
  { 533, 5, 8, 0, 8, 6 },
  { 541, 1, 8, 0, 8, 2 },
  { 549, 2, 10, -1, 8, 2 },
  { 559, 4, 8, 0, 8, 5 },
  { 567, 1, 8, 0, 8, 2 },
  { 575, 7, 6, 0, 6, 8 },
  { 581, 5, 6, 0, 6, 6 },
  { 587, 5, 6, 0, 6, 6 },
  { 593, 5, 8, 0, 6, 6 },
  { 601, 5, 8, 0, 6, 6 },
  { 609, 3, 6, 0, 6, 4 },
  { 615, 5, 6, 0, 6, 6 },
  { 621, 3, 8, -1, 8, 3 },
  { 629, 5, 6, 0, 6, 6 },
  { 635, 5, 6, 0, 6, 6 },
  { 641, 9, 6, 0, 6, 10 },
  { 653, 5, 6, 0, 6, 6 },
  { 659, 5, 8, 0, 6, 6 },
  { 667, 5, 6, 0, 6, 6 },
  { 673, 3, 10, 0, 8, 4 },
  { 683, 1, 10, 0, 8, 2 },
  { 693, 3, 10, 1, 8, 4 },
  { 703, 5, 4, 0, 6, 6 },
  { 707, 6, 8, 1, 8, 8 }
};
#include <stdint.h>

// clang-format off

// - the first two bytes are width and height of the glyph
// - the third, fourth and fifth bytes are advance, bearingX and bearingY of the horizontal metrics of the glyph
// - the rest is packed 4-bit glyph data

/*   */ static const uint8_t Font_Roboto_Bold_20_glyph_32[] = { 0, 0, 5, 0, 0 };
/* ! */ static const uint8_t Font_Roboto_Bold_20_glyph_33[] = { 3, 15, 5, 1, 15, 255, 223, 253, 255, 223, 253, 255, 223, 253, 255, 223, 253, 255, 223, 253, 0, 0, 0, 159, 111, 252, 159, 96 };
/* " */ static const uint8_t Font_Roboto_Bold_20_glyph_34[] = { 5, 5, 7, 1, 15, 255, 15, 255, 240, 255, 253, 15, 223, 176, 252, 250, 15, 160 };
/* # */ static const uint8_t Font_Roboto_Bold_20_glyph_35[] = { 11, 15, 13, 1, 15, 0, 0, 251, 7, 244, 0, 0, 31, 144, 159, 16, 0, 4, 246, 12, 224, 0, 0, 127, 48, 252, 0, 15, 255, 255, 255, 255, 240, 255, 255, 255, 255, 255, 5, 94, 229, 159, 133, 80, 0, 250, 8, 242, 0, 0, 63, 112, 191, 0, 15, 255, 255, 255, 255, 240, 255, 255, 255, 255, 255, 5, 92, 245, 111, 181, 80, 0, 206, 4, 246, 0, 0, 15, 176, 127, 48, 0, 2, 248, 10, 240, 0, 0 };
/* $ */ static const uint8_t Font_Roboto_Bold_20_glyph_36[] = { 10, 19, 12, 1, 17, 0, 0, 253, 0, 0, 0, 0, 253, 0, 0, 1, 158, 255, 215, 0, 29, 255, 255, 255, 192, 143, 249, 17, 191, 246, 207, 240, 0, 47, 251, 207, 242, 0, 8, 135, 159, 253, 48, 0, 0, 47, 255, 252, 80, 0, 3, 223, 255, 252, 32, 0, 5, 207, 255, 242, 0, 0, 3, 223, 249, 153, 128, 0, 47, 252, 239, 240, 0, 15, 252, 175, 250, 17, 159, 248, 47, 255, 255, 255, 225, 1, 175, 255, 250, 16, 0, 0, 253, 0, 0, 0, 0, 253, 0, 0 };
/* % */ static const uint8_t Font_Roboto_Bold_20_glyph_37[] = { 13, 15, 15, 1, 15, 9, 238, 144, 0, 0, 0, 9, 255, 255, 144, 0, 16, 0, 239, 17, 254, 0, 47, 112, 15, 224, 14, 240, 12, 242, 0, 239, 34, 254, 6, 246, 0, 7, 255, 255, 129, 252, 0, 0, 7, 204, 112, 175, 32, 0, 0, 0, 0, 95, 112, 0, 0, 0, 0, 30, 208, 124, 199, 0, 0, 9, 243, 127, 255, 247, 0, 4, 248, 14, 243, 47, 224, 0, 221, 0, 254, 0, 239, 0, 127, 48, 14, 241, 31, 224, 0, 80, 0, 159, 254, 249, 0, 0, 0, 0, 158, 233, 0 };
/* & */ static const uint8_t Font_Roboto_Bold_20_glyph_38[] = { 13, 15, 14, 1, 15, 0, 59, 255, 196, 0, 0, 0, 63, 255, 255, 244, 0, 0, 11, 255, 136, 255, 208, 0, 0, 255, 224, 14, 255, 0, 0, 15, 255, 1, 255, 208, 0, 0, 175, 247, 207, 244, 0, 0, 2, 255, 255, 245, 0, 0, 0, 11, 255, 242, 0, 0, 0, 11, 255, 255, 160, 15, 252, 9, 255, 106, 255, 163, 255, 160, 239, 224, 12, 255, 239, 246, 15, 255, 0, 29, 255, 253, 0, 191, 252, 103, 223, 255, 144, 2, 239, 255, 255, 255, 255, 96, 1, 158, 255, 198, 79, 255, 64 };
/* ' */ static const uint8_t Font_Roboto_Bold_20_glyph_39[] = { 3, 5, 4, 1, 15, 255, 31, 240, 255, 15, 224, 253, 0 };
/* ( */ static const uint8_t Font_Roboto_Bold_20_glyph_40[] = { 6, 22, 7, 1, 17, 0, 0, 0, 0, 0, 168, 0, 28, 250, 0, 191, 208, 5, 255, 48, 13, 251, 0, 79, 246, 0, 143, 242, 0, 207, 240, 0, 239, 224, 0, 255, 208, 0, 255, 208, 0, 239, 208, 0, 223, 224, 0, 175, 240, 0, 111, 244, 0, 31, 249, 0, 9, 254, 0, 1, 239, 128, 0, 79, 245, 0, 4, 250, 0, 0, 19 };
/* ) */ static const uint8_t Font_Roboto_Bold_20_glyph_41[] = { 7, 22, 8, 0, 17, 0, 0, 0, 0, 184, 0, 0, 13, 250, 0, 0, 30, 247, 0, 0, 111, 242, 0, 0, 239, 160, 0, 9, 255, 16, 0, 95, 245, 0, 2, 255, 144, 0, 15, 251, 0, 0, 255, 192, 0, 15, 252, 0, 0, 255, 176, 0, 31, 250, 0, 3, 255, 112, 0, 127, 242, 0, 12, 253, 0, 2, 255, 80, 0, 191, 192, 0, 143, 225, 0, 13, 226, 0, 0, 64, 0, 0 };
/* * */ static const uint8_t Font_Roboto_Bold_20_glyph_42[] = { 10, 9, 9, 0, 15, 0, 0, 253, 0, 0, 0, 0, 253, 0, 0, 9, 32, 253, 2, 112, 95, 251, 254, 191, 241, 5, 158, 255, 250, 96, 0, 13, 255, 128, 0, 0, 175, 124, 244, 0, 4, 252, 3, 254, 0, 0, 98, 0, 115, 0 };
/* + */ static const uint8_t Font_Roboto_Bold_20_glyph_43[] = { 10, 11, 12, 1, 12, 0, 13, 255, 0, 0, 0, 13, 255, 0, 0, 0, 13, 255, 0, 0, 0, 13, 255, 0, 0, 85, 94, 255, 85, 85, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0, 13, 255, 0, 0, 0, 13, 255, 0, 0, 0, 13, 255, 0, 0, 0, 13, 255, 0, 0 };
/* , */ static const uint8_t Font_Roboto_Bold_20_glyph_44[] = { 5, 7, 6, 0, 2, 0, 255, 208, 15, 253, 0, 255, 192, 63, 247, 9, 254, 16, 142, 48, 0, 0, 0 };
/* - */ static const uint8_t Font_Roboto_Bold_20_glyph_45[] = { 6, 3, 8, 1, 8, 85, 85, 85, 255, 255, 255, 255, 255, 255 };
/* . */ static const uint8_t Font_Roboto_Bold_20_glyph_46[] = { 3, 3, 5, 1, 3, 159, 111, 252, 159, 96 };
/* / */ static const uint8_t Font_Roboto_Bold_20_glyph_47[] = { 9, 16, 8, 0, 15, 0, 0, 1, 255, 0, 0, 0, 111, 176, 0, 0, 11, 246, 0, 0, 0, 255, 16, 0, 0, 95, 176, 0, 0, 11, 246, 0, 0, 0, 255, 16, 0, 0, 95, 176, 0, 0, 10, 246, 0, 0, 0, 255, 16, 0, 0, 95, 192, 0, 0, 10, 247, 0, 0, 0, 255, 16, 0, 0, 79, 192, 0, 0, 10, 247, 0, 0, 0, 255, 32, 0, 0 };
/* 0 */ static const uint8_t Font_Roboto_Bold_20_glyph_48[] = { 10, 15, 12, 1, 15, 0, 108, 255, 180, 0, 10, 255, 255, 255, 112, 79, 254, 103, 255, 242, 175, 243, 0, 95, 247, 239, 224, 0, 31, 251, 255, 208, 0, 15, 252, 255, 208, 0, 15, 253, 255, 208, 0, 15, 253, 255, 208, 0, 15, 253, 255, 208, 0, 15, 252, 223, 224, 0, 31, 251, 175, 243, 0, 95, 247, 79, 254, 103, 255, 242, 9, 255, 255, 255, 112, 0, 108, 255, 196, 0 };
/* 1 */ static const uint8_t Font_Roboto_Bold_20_glyph_49[] = { 7, 15, 11, 1, 15, 0, 0, 73, 192, 40, 239, 253, 111, 255, 255, 216, 255, 191, 253, 69, 0, 255, 208, 0, 15, 253, 0, 0, 255, 208, 0, 15, 253, 0, 0, 255, 208, 0, 15, 253, 0, 0, 255, 208, 0, 15, 253, 0, 0, 255, 208, 0, 15, 253, 0, 0, 255, 208 };
/* 2 */ static const uint8_t Font_Roboto_Bold_20_glyph_50[] = { 10, 15, 12, 1, 15, 0, 108, 255, 216, 16, 10, 255, 255, 255, 209, 111, 254, 102, 223, 248, 207, 242, 0, 63, 252, 221, 176, 0, 15, 252, 0, 0, 0, 79, 249, 0, 0, 0, 223, 243, 0, 0, 10, 255, 144, 0, 0, 159, 252, 0, 0, 9, 255, 209, 0, 0, 143, 254, 32, 0, 8, 255, 226, 0, 0, 143, 255, 133, 85, 85, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255 };
/* 3 */ static const uint8_t Font_Roboto_Bold_20_glyph_51[] = { 10, 15, 12, 1, 15, 1, 141, 255, 199, 0, 46, 255, 255, 255, 209, 191, 252, 102, 223, 248, 222, 208, 0, 47, 252, 0, 0, 0, 31, 252, 0, 0, 1, 175, 246, 0, 15, 255, 255, 144, 0, 15, 255, 254, 80, 0, 4, 87, 239, 243, 0, 0, 0, 63, 250, 68, 48, 0, 15, 252, 239, 241, 0, 63, 251, 159, 252, 102, 239, 246, 29, 255, 255, 255, 176, 0, 141, 255, 198, 0 };
/* 4 */ static const uint8_t Font_Roboto_Bold_20_glyph_52[] = { 11, 15, 11, 0, 15, 0, 0, 5, 255, 208, 0, 0, 0, 239, 253, 0, 0, 0, 143, 255, 208, 0, 0, 31, 255, 253, 0, 0, 10, 253, 255, 208, 0, 4, 255, 79, 253, 0, 0, 223, 160, 255, 208, 0, 111, 242, 15, 253, 0, 30, 248, 0, 255, 208, 9, 255, 85, 95, 254, 82, 239, 255, 255, 255, 255, 141, 255, 255, 255, 255, 248, 0, 0, 0, 255, 208, 0, 0, 0, 15, 253, 0, 0, 0, 0, 255, 208, 0 };
/* 5 */ static const uint8_t Font_Roboto_Bold_20_glyph_53[] = { 10, 15, 12, 1, 15, 13, 255, 255, 255, 245, 15, 255, 255, 255, 245, 31, 251, 85, 85, 81, 63, 247, 0, 0, 0, 79, 245, 0, 0, 0, 111, 251, 223, 216, 0, 143, 255, 255, 255, 192, 109, 249, 88, 255, 245, 0, 0, 0, 95, 250, 0, 0, 0, 15, 252, 68, 64, 0, 31, 252, 239, 241, 0, 95, 249, 159, 253, 103, 239, 243, 28, 255, 255, 255, 144, 0, 125, 255, 198, 0 };
/* 6 */ static const uint8_t Font_Roboto_Bold_20_glyph_54[] = { 10, 15, 12, 1, 15, 0, 1, 140, 234, 0, 0, 95, 255, 251, 0, 4, 255, 250, 99, 0, 14, 255, 64, 0, 0, 111, 247, 0, 0, 0, 191, 245, 207, 233, 16, 239, 255, 255, 255, 192, 255, 253, 103, 255, 245, 255, 224, 0, 95, 250, 255, 208, 0, 31, 252, 239, 224, 0, 31, 252, 175, 243, 0, 95, 249, 63, 254, 103, 255, 243, 7, 255, 255, 255, 128, 0, 76, 255, 197, 0 };
/* 7 */ static const uint8_t Font_Roboto_Bold_20_glyph_55[] = { 10, 15, 12, 1, 15, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 85, 85, 85, 111, 250, 0, 0, 0, 127, 243, 0, 0, 0, 239, 208, 0, 0, 5, 255, 96, 0, 0, 12, 255, 0, 0, 0, 63, 249, 0, 0, 0, 175, 242, 0, 0, 1, 255, 192, 0, 0, 7, 255, 80, 0, 0, 14, 254, 0, 0, 0, 95, 248, 0, 0, 0, 207, 242, 0, 0, 3, 255, 176, 0, 0 };
/* 8 */ static const uint8_t Font_Roboto_Bold_20_glyph_56[] = { 10, 15, 12, 1, 15, 1, 158, 254, 162, 0, 30, 255, 255, 255, 48, 159, 252, 106, 255, 176, 207, 241, 0, 239, 240, 207, 240, 0, 239, 240, 127, 248, 5, 255, 176, 10, 255, 255, 254, 32, 6, 255, 255, 253, 48, 95, 253, 103, 239, 242, 207, 241, 0, 63, 249, 255, 208, 0, 15, 252, 239, 241, 0, 63, 251, 175, 253, 102, 239, 247, 30, 255, 255, 255, 192, 1, 141, 255, 199, 0 };
/* 9 */ static const uint8_t Font_Roboto_Bold_20_glyph_57[] = { 10, 15, 12, 1, 15, 0, 108, 254, 179, 0, 9, 255, 255, 255, 80, 79, 254, 104, 255, 225, 191, 244, 0, 127, 247, 239, 224, 0, 31, 251, 255, 208, 0, 15, 252, 239, 241, 0, 15, 253, 175, 250, 17, 175, 252, 47, 255, 255, 255, 251, 4, 239, 255, 159, 248, 0, 3, 65, 111, 243, 0, 0, 2, 255, 192, 0, 70, 175, 255, 48, 0, 223, 255, 228, 0, 0, 222, 199, 16, 0 };
/* : */ static const uint8_t Font_Roboto_Bold_20_glyph_58[] = { 3, 11, 5, 1, 11, 159, 111, 252, 159, 96, 0, 0, 0, 0, 0, 0, 0, 159, 111, 252, 159, 96 };
/* ; */ static const uint8_t Font_Roboto_Bold_20_glyph_59[] = { 4, 15, 5, 0, 11, 8, 248, 15, 255, 8, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 136, 13, 255, 13, 255, 14, 253, 31, 247, 95, 192, 6, 0 };
/* < */ static const uint8_t Font_Roboto_Bold_20_glyph_60[] = { 9, 10, 11, 1, 11, 0, 0, 0, 41, 112, 0, 4, 191, 248, 0, 109, 255, 255, 105, 255, 255, 216, 32, 255, 250, 48, 0, 15, 255, 233, 48, 0, 58, 255, 255, 232, 32, 1, 126, 255, 248, 0, 0, 5, 207, 128, 0, 0, 0, 52 };
/* = */ static const uint8_t Font_Roboto_Bold_20_glyph_61[] = { 9, 7, 11, 1, 10, 85, 85, 85, 85, 95, 255, 255, 255, 255, 255, 255, 255, 255, 240, 0, 0, 0, 0, 85, 85, 85, 85, 95, 255, 255, 255, 255, 255, 255, 255, 255, 240 };
/* > */ static const uint8_t Font_Roboto_Bold_20_glyph_62[] = { 9, 10, 10, 1, 11, 197, 0, 0, 0, 15, 254, 129, 0, 0, 239, 255, 250, 48, 0, 74, 255, 255, 195, 0, 0, 93, 255, 128, 1, 108, 255, 247, 91, 255, 255, 214, 15, 255, 251, 64, 0, 255, 146, 0, 0, 6, 0, 0, 0, 0 };
/* ? */ static const uint8_t Font_Roboto_Bold_20_glyph_63[] = { 9, 15, 11, 1, 15, 2, 157, 254, 162, 3, 255, 255, 255, 226, 191, 251, 91, 255, 159, 255, 16, 31, 252, 17, 16, 1, 255, 192, 0, 0, 159, 248, 0, 0, 127, 253, 16, 0, 79, 255, 32, 0, 12, 255, 80, 0, 0, 255, 240, 0, 0, 6, 117, 0, 0, 0, 0, 0, 0, 0, 9, 246, 0, 0, 0, 255, 192, 0, 0, 9, 246, 0, 0 };
/* @ */ static const uint8_t Font_Roboto_Bold_20_glyph_64[] = { 16, 19, 18, 1, 15, 0, 0, 23, 207, 254, 182, 0, 0, 0, 5, 255, 255, 223, 255, 210, 0, 0, 111, 248, 16, 0, 59, 254, 16, 2, 255, 64, 1, 67, 0, 159, 160, 12, 245, 0, 143, 255, 176, 13, 242, 79, 192, 7, 255, 255, 247, 7, 247, 159, 96, 31, 248, 8, 246, 2, 251, 207, 16, 127, 192, 9, 244, 0, 254, 239, 0, 191, 112, 10, 243, 0, 239, 254, 0, 239, 64, 11, 242, 0, 239, 255, 0, 255, 48, 13, 240, 0, 254, 239, 16, 239, 48, 15, 240, 3, 250, 191, 64, 207, 128, 127, 242, 11, 244, 143, 160, 111, 254, 251, 255, 239, 176, 47, 243, 8, 254, 80, 175, 232, 0, 11, 254, 48, 0, 0, 0, 0, 0, 1, 239, 251, 117, 103, 160, 0, 0, 0, 45, 255, 255, 255, 242, 0, 0, 0, 0, 107, 239, 235, 96, 0, 0 };
/* A */ static const uint8_t Font_Roboto_Bold_20_glyph_65[] = { 14, 15, 13, 0, 15, 0, 0, 12, 255, 64, 0, 0, 0, 0, 47, 255, 144, 0, 0, 0, 0, 143, 255, 240, 0, 0, 0, 0, 223, 255, 245, 0, 0, 0, 3, 255, 159, 250, 0, 0, 0, 9, 255, 60, 255, 16, 0, 0, 14, 254, 7, 255, 96, 0, 0, 79, 249, 2, 255, 176, 0, 0, 175, 244, 0, 223, 241, 0, 0, 255, 247, 102, 207, 247, 0, 5, 255, 255, 255, 255, 252, 0, 11, 255, 255, 255, 255, 255, 32, 31, 255, 0, 0, 8, 255, 128, 111, 250, 0, 0, 3, 255, 208, 191, 245, 0, 0, 0, 239, 243 };
/* B */ static const uint8_t Font_Roboto_Bold_20_glyph_66[] = { 11, 15, 13, 1, 15, 255, 255, 255, 216, 16, 15, 255, 255, 255, 254, 32, 255, 229, 86, 223, 250, 15, 253, 0, 1, 255, 224, 255, 208, 0, 13, 255, 15, 253, 0, 1, 255, 208, 255, 229, 86, 207, 248, 15, 255, 255, 255, 253, 0, 255, 255, 255, 255, 252, 15, 253, 0, 1, 175, 248, 255, 208, 0, 1, 255, 207, 253, 0, 0, 47, 252, 255, 229, 85, 126, 255, 143, 255, 255, 255, 255, 208, 255, 255, 255, 252, 112, 0 };
/* C */ static const uint8_t Font_Roboto_Bold_20_glyph_67[] = { 12, 15, 13, 1, 15, 0, 7, 223, 253, 129, 0, 1, 223, 255, 255, 253, 16, 12, 255, 165, 108, 255, 192, 95, 249, 0, 0, 223, 243, 175, 242, 0, 0, 143, 247, 239, 224, 0, 0, 1, 16, 255, 208, 0, 0, 0, 0, 255, 208, 0, 0, 0, 0, 255, 208, 0, 0, 0, 0, 239, 224, 0, 0, 0, 0, 191, 241, 0, 0, 143, 247, 95, 248, 0, 0, 223, 244, 12, 255, 149, 108, 255, 208, 2, 239, 255, 255, 254, 32, 0, 8, 223, 253, 129, 0 };
/* D */ static const uint8_t Font_Roboto_Bold_20_glyph_68[] = { 11, 15, 13, 1, 15, 255, 255, 254, 163, 0, 15, 255, 255, 255, 247, 0, 255, 229, 88, 239, 246, 15, 253, 0, 1, 239, 241, 255, 208, 0, 6, 255, 111, 253, 0, 0, 47, 250, 255, 208, 0, 0, 255, 207, 253, 0, 0, 15, 253, 255, 208, 0, 0, 255, 207, 253, 0, 0, 47, 250, 255, 208, 0, 7, 255, 111, 253, 0, 2, 239, 241, 255, 229, 88, 239, 246, 15, 255, 255, 255, 247, 0, 255, 255, 254, 163, 0, 0 };
/* E */ static const uint8_t Font_Roboto_Bold_20_glyph_69[] = { 10, 15, 11, 1, 15, 255, 255, 255, 255, 248, 255, 255, 255, 255, 248, 255, 229, 85, 85, 82, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 229, 85, 85, 32, 255, 255, 255, 255, 128, 255, 255, 255, 255, 128, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 229, 85, 85, 82, 255, 255, 255, 255, 248, 255, 255, 255, 255, 248 };
/* F */ static const uint8_t Font_Roboto_Bold_20_glyph_70[] = { 10, 15, 11, 1, 15, 255, 255, 255, 255, 248, 255, 255, 255, 255, 248, 255, 229, 85, 85, 82, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 229, 85, 85, 32, 255, 255, 255, 255, 128, 255, 255, 255, 255, 128, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0 };
/* G */ static const uint8_t Font_Roboto_Bold_20_glyph_71[] = { 12, 15, 14, 1, 15, 0, 7, 207, 254, 163, 0, 1, 223, 255, 255, 255, 80, 12, 255, 198, 105, 255, 242, 95, 251, 0, 0, 111, 248, 175, 243, 0, 0, 11, 184, 239, 240, 0, 0, 0, 0, 255, 208, 0, 0, 0, 0, 255, 208, 0, 239, 255, 253, 255, 208, 0, 239, 255, 253, 239, 240, 0, 69, 95, 253, 175, 243, 0, 0, 15, 253, 95, 252, 0, 0, 15, 253, 11, 255, 215, 86, 207, 253, 1, 207, 255, 255, 255, 229, 0, 6, 206, 255, 200, 16 };
/* H */ static const uint8_t Font_Roboto_Bold_20_glyph_72[] = { 12, 15, 14, 1, 15, 255, 208, 0, 0, 15, 253, 255, 208, 0, 0, 15, 253, 255, 208, 0, 0, 15, 253, 255, 208, 0, 0, 15, 253, 255, 208, 0, 0, 15, 253, 255, 208, 0, 0, 15, 253, 255, 229, 85, 85, 95, 253, 255, 255, 255, 255, 255, 253, 255, 255, 255, 255, 255, 253, 255, 208, 0, 0, 15, 253, 255, 208, 0, 0, 15, 253, 255, 208, 0, 0, 15, 253, 255, 208, 0, 0, 15, 253, 255, 208, 0, 0, 15, 253, 255, 208, 0, 0, 15, 253 };
/* I */ static const uint8_t Font_Roboto_Bold_20_glyph_73[] = { 3, 15, 5, 1, 15, 255, 223, 253, 255, 223, 253, 255, 223, 253, 255, 223, 253, 255, 223, 253, 255, 223, 253, 255, 223, 253, 255, 208 };
/* J */ static const uint8_t Font_Roboto_Bold_20_glyph_74[] = { 10, 15, 12, 1, 15, 0, 0, 0, 15, 253, 0, 0, 0, 15, 253, 0, 0, 0, 15, 253, 0, 0, 0, 15, 253, 0, 0, 0, 15, 253, 0, 0, 0, 15, 253, 0, 0, 0, 15, 253, 0, 0, 0, 15, 253, 0, 0, 0, 15, 253, 0, 0, 0, 15, 253, 136, 112, 0, 15, 252, 239, 241, 0, 79, 250, 159, 253, 120, 255, 245, 30, 255, 255, 255, 144, 1, 141, 255, 197, 0 };
/* K */ static const uint8_t Font_Roboto_Bold_20_glyph_75[] = { 12, 15, 12, 1, 15, 255, 208, 0, 10, 255, 225, 255, 208, 0, 95, 255, 48, 255, 208, 2, 255, 247, 0, 255, 208, 12, 255, 160, 0, 255, 208, 159, 253, 16, 0, 255, 212, 255, 243, 0, 0, 255, 238, 255, 112, 0, 0, 255, 255, 255, 192, 0, 0, 255, 255, 255, 247, 0, 0, 255, 253, 111, 255, 16, 0, 255, 225, 11, 255, 176, 0, 255, 208, 2, 255, 245, 0, 255, 208, 0, 143, 254, 0, 255, 208, 0, 13, 255, 144, 255, 208, 0, 4, 255, 243 };
/* L */ static const uint8_t Font_Roboto_Bold_20_glyph_76[] = { 9, 15, 11, 1, 15, 255, 208, 0, 0, 15, 253, 0, 0, 0, 255, 208, 0, 0, 15, 253, 0, 0, 0, 255, 208, 0, 0, 15, 253, 0, 0, 0, 255, 208, 0, 0, 15, 253, 0, 0, 0, 255, 208, 0, 0, 15, 253, 0, 0, 0, 255, 208, 0, 0, 15, 253, 0, 0, 0, 255, 230, 102, 102, 111, 255, 255, 255, 255, 255, 255, 255, 255, 240 };
/* M */ static const uint8_t Font_Roboto_Bold_20_glyph_77[] = { 15, 15, 17, 1, 15, 255, 255, 16, 0, 0, 31, 255, 255, 255, 246, 0, 0, 6, 255, 255, 255, 255, 176, 0, 0, 191, 255, 255, 255, 255, 16, 0, 31, 255, 255, 255, 222, 246, 0, 6, 254, 223, 255, 253, 175, 192, 0, 207, 173, 255, 255, 212, 255, 16, 31, 244, 223, 255, 253, 15, 247, 7, 255, 13, 255, 255, 208, 175, 192, 207, 160, 223, 255, 253, 5, 255, 79, 244, 13, 255, 255, 208, 15, 254, 255, 0, 223, 255, 253, 0, 175, 255, 160, 13, 255, 255, 208, 5, 255, 245, 0, 223, 255, 253, 0, 15, 255, 0, 13, 255, 255, 208, 0, 175, 160, 0, 223, 240 };
/* N */ static const uint8_t Font_Roboto_Bold_20_glyph_78[] = { 12, 15, 14, 1, 15, 255, 242, 0, 0, 15, 253, 255, 252, 0, 0, 15, 253, 255, 255, 96, 0, 15, 253, 255, 255, 225, 0, 15, 253, 255, 255, 250, 0, 15, 253, 255, 222, 255, 64, 15, 253, 255, 213, 255, 208, 15, 253, 255, 208, 191, 248, 15, 253, 255, 208, 31, 255, 47, 253, 255, 208, 7, 255, 207, 253, 255, 208, 0, 207, 255, 253, 255, 208, 0, 63, 255, 253, 255, 208, 0, 9, 255, 253, 255, 208, 0, 0, 239, 253, 255, 208, 0, 0, 95, 253 };
/* O */ static const uint8_t Font_Roboto_Bold_20_glyph_79[] = { 12, 15, 14, 1, 15, 0, 7, 207, 252, 112, 0, 1, 207, 255, 255, 252, 16, 11, 255, 198, 108, 255, 176, 79, 251, 0, 0, 191, 244, 175, 243, 0, 0, 63, 250, 223, 240, 0, 0, 15, 253, 255, 208, 0, 0, 13, 255, 255, 208, 0, 0, 13, 255, 255, 208, 0, 0, 13, 255, 223, 240, 0, 0, 15, 253, 175, 243, 0, 0, 63, 250, 79, 251, 0, 0, 191, 244, 11, 255, 198, 108, 255, 176, 1, 207, 255, 255, 252, 16, 0, 7, 207, 252, 112, 0 };
/* P */ static const uint8_t Font_Roboto_Bold_20_glyph_80[] = { 11, 15, 13, 1, 15, 255, 255, 255, 235, 48, 15, 255, 255, 255, 255, 96, 255, 229, 85, 143, 255, 47, 253, 0, 0, 127, 249, 255, 208, 0, 1, 255, 207, 253, 0, 0, 15, 252, 255, 208, 0, 5, 255, 175, 254, 85, 88, 255, 244, 255, 255, 255, 255, 248, 15, 255, 255, 254, 180, 0, 255, 208, 0, 0, 0, 15, 253, 0, 0, 0, 0, 255, 208, 0, 0, 0, 15, 253, 0, 0, 0, 0, 255, 208, 0, 0, 0, 0 };
/* Q */ static const uint8_t Font_Roboto_Bold_20_glyph_81[] = { 13, 18, 14, 1, 15, 0, 7, 207, 252, 112, 0, 0, 28, 255, 255, 255, 193, 0, 11, 255, 198, 108, 255, 176, 4, 255, 176, 0, 11, 255, 64, 175, 243, 0, 0, 63, 250, 13, 255, 0, 0, 0, 255, 208, 255, 208, 0, 0, 13, 255, 15, 253, 0, 0, 0, 223, 240, 255, 208, 0, 0, 13, 255, 13, 255, 0, 0, 0, 255, 208, 175, 243, 0, 0, 63, 250, 4, 255, 176, 0, 11, 255, 80, 11, 255, 198, 108, 255, 192, 0, 28, 255, 255, 255, 226, 0, 0, 6, 207, 255, 255, 112, 0, 0, 0, 0, 62, 255, 160, 0, 0, 0, 0, 28, 227, 0, 0, 0, 0, 0, 2, 0 };
/* R */ static const uint8_t Font_Roboto_Bold_20_glyph_82[] = { 12, 15, 13, 1, 15, 255, 255, 255, 235, 80, 0, 255, 255, 255, 255, 251, 0, 255, 229, 85, 143, 255, 96, 255, 208, 0, 4, 255, 176, 255, 208, 0, 0, 255, 192, 255, 208, 0, 2, 255, 176, 255, 208, 0, 60, 255, 96, 255, 255, 255, 255, 252, 0, 255, 255, 255, 255, 160, 0, 255, 229, 89, 255, 192, 0, 255, 208, 0, 239, 244, 0, 255, 208, 0, 127, 251, 0, 255, 208, 0, 14, 255, 48, 255, 208, 0, 7, 255, 160, 255, 208, 0, 0, 239, 242 };
/* S */ static const uint8_t Font_Roboto_Bold_20_glyph_83[] = { 11, 15, 13, 1, 15, 0, 91, 239, 235, 64, 0, 191, 255, 255, 255, 144, 127, 254, 117, 142, 255, 92, 255, 32, 0, 79, 251, 207, 242, 0, 0, 119, 88, 255, 229, 0, 0, 0, 29, 255, 255, 164, 0, 0, 8, 255, 255, 252, 32, 0, 1, 125, 255, 254, 16, 0, 0, 3, 207, 249, 188, 176, 0, 2, 255, 204, 255, 32, 0, 47, 252, 111, 254, 133, 109, 255, 128, 143, 255, 255, 255, 192, 0, 58, 239, 252, 112, 0 };
/* T */ static const uint8_t Font_Roboto_Bold_20_glyph_84[] = { 12, 15, 14, 1, 15, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 85, 85, 239, 245, 85, 85, 0, 0, 223, 240, 0, 0, 0, 0, 223, 240, 0, 0, 0, 0, 223, 240, 0, 0, 0, 0, 223, 240, 0, 0, 0, 0, 223, 240, 0, 0, 0, 0, 223, 240, 0, 0, 0, 0, 223, 240, 0, 0, 0, 0, 223, 240, 0, 0, 0, 0, 223, 240, 0, 0, 0, 0, 223, 240, 0, 0, 0, 0, 223, 240, 0, 0, 0, 0, 223, 240, 0, 0 };
/* U */ static const uint8_t Font_Roboto_Bold_20_glyph_85[] = { 11, 15, 13, 1, 15, 255, 208, 0, 0, 255, 223, 253, 0, 0, 15, 253, 255, 208, 0, 0, 255, 223, 253, 0, 0, 15, 253, 255, 208, 0, 0, 255, 223, 253, 0, 0, 15, 253, 255, 208, 0, 0, 255, 223, 253, 0, 0, 15, 253, 255, 208, 0, 0, 255, 223, 253, 0, 0, 15, 253, 255, 224, 0, 1, 255, 204, 255, 48, 0, 111, 249, 95, 254, 117, 143, 255, 48, 159, 255, 255, 255, 96, 0, 91, 239, 234, 48, 0 };
/* V */ static const uint8_t Font_Roboto_Bold_20_glyph_86[] = { 14, 15, 13, 0, 15, 207, 247, 0, 0, 6, 255, 208, 111, 252, 0, 0, 10, 255, 128, 31, 255, 0, 0, 15, 255, 48, 12, 255, 80, 0, 79, 253, 0, 7, 255, 144, 0, 143, 248, 0, 1, 255, 224, 0, 223, 243, 0, 0, 207, 242, 1, 255, 208, 0, 0, 127, 247, 6, 255, 128, 0, 0, 47, 251, 10, 255, 48, 0, 0, 12, 255, 31, 253, 0, 0, 0, 7, 255, 159, 248, 0, 0, 0, 2, 255, 255, 243, 0, 0, 0, 0, 207, 255, 224, 0, 0, 0, 0, 127, 255, 128, 0, 0, 0, 0, 47, 255, 48, 0, 0 };
/* W */ static const uint8_t Font_Roboto_Bold_20_glyph_87[] = { 18, 15, 18, 0, 15, 143, 245, 0, 9, 255, 16, 0, 223, 241, 95, 248, 0, 12, 255, 80, 0, 255, 208, 47, 251, 0, 15, 255, 144, 2, 255, 160, 14, 254, 0, 63, 255, 192, 5, 255, 112, 11, 255, 16, 127, 255, 240, 8, 255, 48, 8, 255, 64, 175, 207, 243, 11, 255, 0, 4, 255, 112, 239, 110, 247, 14, 252, 0, 1, 255, 145, 255, 42, 250, 31, 249, 0, 0, 223, 197, 255, 6, 254, 79, 246, 0, 0, 175, 249, 251, 3, 255, 143, 242, 0, 0, 127, 254, 247, 0, 255, 239, 240, 0, 0, 63, 255, 244, 0, 191, 255, 192, 0, 0, 15, 255, 240, 0, 143, 255, 128, 0, 0, 13, 255, 192, 0, 79, 255, 80, 0, 0, 9, 255, 144, 0, 15, 255, 32, 0 };
/* X */ static const uint8_t Font_Roboto_Bold_20_glyph_88[] = { 13, 15, 13, 0, 15, 111, 254, 0, 0, 63, 255, 32, 223, 247, 0, 11, 255, 128, 4, 255, 225, 4, 255, 225, 0, 11, 255, 128, 207, 247, 0, 0, 47, 255, 95, 253, 0, 0, 0, 159, 255, 255, 80, 0, 0, 1, 255, 255, 192, 0, 0, 0, 10, 255, 246, 0, 0, 0, 2, 255, 255, 208, 0, 0, 0, 191, 255, 255, 96, 0, 0, 79, 254, 79, 254, 0, 0, 12, 255, 112, 191, 248, 0, 6, 255, 224, 3, 255, 242, 0, 239, 246, 0, 10, 255, 160, 143, 254, 0, 0, 47, 255, 48 };
/* Y */ static const uint8_t Font_Roboto_Bold_20_glyph_89[] = { 13, 15, 13, 0, 15, 127, 251, 0, 0, 14, 255, 64, 239, 242, 0, 5, 255, 192, 7, 255, 144, 0, 207, 244, 0, 14, 255, 16, 63, 252, 0, 0, 127, 247, 9, 255, 64, 0, 0, 239, 209, 255, 192, 0, 0, 8, 255, 207, 245, 0, 0, 0, 31, 255, 253, 0, 0, 0, 0, 143, 255, 80, 0, 0, 0, 1, 255, 224, 0, 0, 0, 0, 15, 253, 0, 0, 0, 0, 0, 255, 208, 0, 0, 0, 0, 15, 253, 0, 0, 0, 0, 0, 255, 208, 0, 0, 0, 0, 15, 253, 0, 0, 0 };
/* Z */ static const uint8_t Font_Roboto_Bold_20_glyph_90[] = { 11, 15, 13, 1, 15, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 85, 85, 85, 95, 255, 96, 0, 0, 8, 255, 192, 0, 0, 3, 255, 242, 0, 0, 0, 223, 247, 0, 0, 0, 143, 252, 0, 0, 0, 47, 255, 32, 0, 0, 12, 255, 128, 0, 0, 7, 255, 208, 0, 0, 2, 255, 243, 0, 0, 0, 207, 248, 0, 0, 0, 127, 255, 85, 85, 85, 95, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 240 };
/* [ */ static const uint8_t Font_Roboto_Bold_20_glyph_91[] = { 4, 21, 6, 1, 18, 85, 85, 255, 255, 255, 255, 255, 208, 255, 208, 255, 208, 255, 208, 255, 208, 255, 208, 255, 208, 255, 208, 255, 208, 255, 208, 255, 208, 255, 208, 255, 208, 255, 208, 255, 208, 255, 229, 255, 255, 255, 255 };
/* \ */ static const uint8_t Font_Roboto_Bold_20_glyph_92[] = { 9, 16, 8, 0, 15, 223, 241, 0, 0, 7, 255, 96, 0, 0, 31, 252, 0, 0, 0, 191, 242, 0, 0, 5, 255, 128, 0, 0, 14, 254, 0, 0, 0, 159, 244, 0, 0, 3, 255, 160, 0, 0, 13, 255, 0, 0, 0, 127, 246, 0, 0, 1, 255, 192, 0, 0, 11, 255, 32, 0, 0, 95, 248, 0, 0, 0, 255, 224, 0, 0, 9, 255, 64, 0, 0, 79, 250 };
/* ] */ static const uint8_t Font_Roboto_Bold_20_glyph_93[] = { 5, 21, 6, 0, 18, 37, 85, 72, 255, 253, 143, 255, 208, 15, 253, 0, 255, 208, 15, 253, 0, 255, 208, 15, 253, 0, 255, 208, 15, 253, 0, 255, 208, 15, 253, 0, 255, 208, 15, 253, 0, 255, 208, 15, 253, 0, 255, 208, 15, 253, 37, 255, 216, 255, 253, 143, 255, 208 };
/* ^ */ static const uint8_t Font_Roboto_Bold_20_glyph_94[] = { 9, 8, 9, 0, 15, 0, 5, 132, 0, 0, 1, 255, 192, 0, 0, 111, 255, 32, 0, 12, 253, 249, 0, 3, 254, 63, 224, 0, 159, 144, 223, 80, 15, 243, 7, 251, 5, 253, 0, 31, 242 };
/* _ */ static const uint8_t Font_Roboto_Bold_20_glyph_95[] = { 9, 3, 11, 1, 1, 85, 85, 85, 85, 95, 255, 255, 255, 255, 255, 255, 255, 255, 240 };
/* ` */ static const uint8_t Font_Roboto_Bold_20_glyph_96[] = { 6, 3, 7, 0, 15, 46, 253, 0, 3, 255, 128, 0, 79, 243 };
/* a */ static const uint8_t Font_Roboto_Bold_20_glyph_97[] = { 10, 11, 11, 1, 11, 2, 157, 254, 162, 0, 79, 255, 255, 255, 64, 223, 248, 89, 255, 192, 86, 80, 0, 223, 240, 1, 139, 221, 255, 240, 63, 255, 255, 255, 240, 207, 246, 0, 223, 240, 255, 224, 0, 223, 240, 239, 248, 91, 255, 240, 111, 255, 255, 255, 240, 5, 207, 231, 159, 244 };
/* b */ static const uint8_t Font_Roboto_Bold_20_glyph_98[] = { 10, 15, 11, 1, 15, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 214, 223, 232, 0, 255, 255, 255, 255, 176, 255, 251, 87, 255, 244, 255, 224, 0, 111, 249, 255, 208, 0, 31, 252, 255, 208, 0, 15, 253, 255, 208, 0, 31, 252, 255, 224, 0, 95, 249, 255, 251, 87, 239, 244, 255, 239, 255, 255, 176, 255, 150, 223, 232, 0 };
/* c */ static const uint8_t Font_Roboto_Bold_20_glyph_99[] = { 9, 11, 11, 1, 11, 0, 125, 254, 162, 0, 191, 255, 255, 242, 111, 252, 106, 255, 187, 255, 16, 14, 255, 239, 224, 0, 34, 47, 253, 0, 0, 0, 239, 224, 0, 0, 11, 255, 16, 13, 237, 95, 252, 106, 255, 176, 191, 255, 255, 242, 0, 125, 254, 162, 0 };
/* d */ static const uint8_t Font_Roboto_Bold_20_glyph_100[] = { 10, 15, 12, 1, 15, 0, 0, 0, 15, 253, 0, 0, 0, 15, 253, 0, 0, 0, 15, 253, 0, 0, 0, 15, 253, 1, 158, 252, 79, 253, 12, 255, 255, 255, 253, 111, 254, 118, 207, 253, 207, 243, 0, 31, 253, 255, 224, 0, 15, 253, 255, 208, 0, 15, 253, 255, 224, 0, 15, 253, 207, 243, 0, 31, 253, 111, 254, 102, 207, 253, 12, 255, 255, 255, 253, 1, 158, 252, 76, 253 };
/* e */ static const uint8_t Font_Roboto_Bold_20_glyph_101[] = { 10, 11, 11, 1, 11, 0, 92, 255, 198, 0, 8, 255, 255, 255, 160, 79, 253, 102, 207, 244, 191, 242, 0, 31, 249, 239, 255, 255, 255, 252, 255, 255, 255, 255, 253, 255, 245, 85, 85, 84, 191, 246, 0, 1, 48, 79, 255, 149, 125, 226, 8, 255, 255, 255, 227, 0, 75, 239, 233, 16 };
/* f */ static const uint8_t Font_Roboto_Bold_20_glyph_102[] = { 7, 15, 9, 1, 15, 0, 59, 239, 208, 79, 255, 255, 11, 255, 165, 80, 223, 240, 0, 255, 255, 255, 255, 255, 255, 255, 94, 255, 85, 80, 223, 240, 0, 13, 255, 0, 0, 223, 240, 0, 13, 255, 0, 0, 223, 240, 0, 13, 255, 0, 0, 223, 240, 0, 13, 255, 0, 0 };
/* g */ static const uint8_t Font_Roboto_Bold_20_glyph_103[] = { 10, 15, 12, 1, 11, 0, 142, 253, 92, 253, 12, 255, 255, 255, 253, 111, 254, 118, 207, 253, 207, 244, 0, 15, 253, 255, 240, 0, 15, 253, 255, 208, 0, 15, 253, 255, 224, 0, 15, 253, 207, 244, 0, 15, 253, 111, 254, 118, 207, 253, 12, 255, 255, 255, 253, 0, 142, 253, 95, 252, 1, 16, 0, 79, 251, 12, 231, 87, 239, 245, 46, 255, 255, 255, 160, 1, 141, 255, 197, 0 };
/* h */ static const uint8_t Font_Roboto_Bold_20_glyph_104[] = { 9, 15, 11, 1, 15, 255, 208, 0, 0, 15, 253, 0, 0, 0, 255, 208, 0, 0, 15, 253, 0, 0, 0, 255, 212, 207, 214, 15, 255, 255, 255, 246, 255, 250, 105, 255, 207, 253, 0, 14, 255, 255, 208, 0, 223, 255, 253, 0, 13, 255, 255, 208, 0, 223, 255, 253, 0, 13, 255, 255, 208, 0, 223, 255, 253, 0, 13, 255, 255, 208, 0, 223, 240 };
/* i */ static const uint8_t Font_Roboto_Bold_20_glyph_105[] = { 3, 15, 5, 1, 15, 159, 111, 252, 159, 96, 0, 255, 223, 253, 255, 223, 253, 255, 223, 253, 255, 223, 253, 255, 223, 253, 255, 208 };
/* j */ static const uint8_t Font_Roboto_Bold_20_glyph_106[] = { 5, 19, 6, 0, 15, 0, 159, 96, 15, 252, 0, 159, 96, 0, 0, 0, 255, 208, 15, 253, 0, 255, 208, 15, 253, 0, 255, 208, 15, 253, 0, 255, 208, 15, 253, 0, 255, 208, 15, 253, 0, 255, 208, 15, 252, 106, 255, 175, 255, 243, 239, 197, 0 };
/* k */ static const uint8_t Font_Roboto_Bold_20_glyph_107[] = { 10, 15, 11, 1, 15, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 208, 5, 255, 225, 255, 208, 63, 255, 48, 255, 209, 239, 245, 0, 255, 220, 255, 128, 0, 255, 255, 253, 0, 0, 255, 255, 255, 48, 0, 255, 254, 255, 208, 0, 255, 225, 159, 248, 0, 255, 208, 30, 255, 48, 255, 208, 6, 255, 192, 255, 208, 0, 207, 247 };
/* l */ static const uint8_t Font_Roboto_Bold_20_glyph_108[] = { 3, 15, 5, 1, 15, 255, 223, 253, 255, 223, 253, 255, 223, 253, 255, 223, 253, 255, 223, 253, 255, 223, 253, 255, 223, 253, 255, 208 };
/* m */ static const uint8_t Font_Roboto_Bold_20_glyph_109[] = { 16, 11, 17, 1, 11, 255, 181, 207, 232, 4, 207, 216, 0, 255, 255, 255, 255, 191, 255, 255, 144, 255, 250, 89, 255, 252, 103, 255, 240, 255, 208, 0, 239, 241, 0, 191, 242, 255, 208, 0, 223, 240, 0, 175, 242, 255, 208, 0, 223, 240, 0, 175, 242, 255, 208, 0, 223, 240, 0, 175, 242, 255, 208, 0, 223, 240, 0, 175, 242, 255, 208, 0, 223, 240, 0, 175, 242, 255, 208, 0, 223, 240, 0, 175, 242, 255, 208, 0, 223, 240, 0, 175, 242 };
/* n */ static const uint8_t Font_Roboto_Bold_20_glyph_110[] = { 9, 11, 11, 1, 11, 255, 181, 207, 215, 15, 255, 255, 255, 247, 255, 250, 89, 255, 223, 253, 0, 14, 255, 255, 208, 0, 223, 255, 253, 0, 13, 255, 255, 208, 0, 223, 255, 253, 0, 13, 255, 255, 208, 0, 223, 255, 253, 0, 13, 255, 255, 208, 0, 223, 240 };
/* o */ static const uint8_t Font_Roboto_Bold_20_glyph_111[] = { 10, 11, 12, 1, 11, 0, 108, 255, 198, 0, 9, 255, 255, 255, 144, 79, 254, 119, 239, 245, 191, 243, 0, 79, 251, 239, 224, 0, 14, 254, 255, 208, 0, 13, 255, 239, 224, 0, 14, 254, 191, 243, 0, 63, 251, 95, 254, 118, 239, 245, 9, 255, 255, 255, 160, 0, 108, 255, 198, 0 };
/* p */ static const uint8_t Font_Roboto_Bold_20_glyph_112[] = { 10, 15, 11, 1, 11, 255, 167, 223, 232, 0, 255, 255, 255, 255, 160, 255, 250, 87, 255, 244, 255, 208, 0, 111, 249, 255, 208, 0, 31, 252, 255, 208, 0, 15, 253, 255, 208, 0, 31, 252, 255, 208, 0, 111, 249, 255, 251, 87, 255, 243, 255, 255, 255, 255, 160, 255, 214, 223, 232, 0, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0, 255, 208, 0, 0, 0 };
/* q */ static const uint8_t Font_Roboto_Bold_20_glyph_113[] = { 10, 15, 12, 1, 11, 1, 158, 252, 75, 253, 13, 255, 255, 255, 253, 127, 254, 118, 207, 253, 207, 243, 0, 15, 253, 255, 224, 0, 15, 253, 255, 208, 0, 15, 253, 255, 224, 0, 15, 253, 207, 243, 0, 15, 253, 111, 254, 118, 207, 253, 12, 255, 255, 255, 253, 1, 158, 252, 79, 253, 0, 0, 0, 15, 253, 0, 0, 0, 15, 253, 0, 0, 0, 15, 253, 0, 0, 0, 15, 253 };
/* r */ static const uint8_t Font_Roboto_Bold_20_glyph_114[] = { 6, 12, 8, 1, 12, 0, 0, 0, 255, 184, 239, 255, 255, 255, 255, 251, 101, 255, 224, 0, 255, 208, 0, 255, 208, 0, 255, 208, 0, 255, 208, 0, 255, 208, 0, 255, 208, 0, 255, 208, 0 };
/* s */ static const uint8_t Font_Roboto_Bold_20_glyph_115[] = { 9, 11, 11, 1, 11, 2, 173, 254, 162, 3, 255, 255, 255, 243, 191, 250, 89, 255, 204, 255, 16, 9, 170, 143, 253, 115, 0, 0, 143, 255, 254, 112, 0, 5, 158, 255, 168, 135, 0, 14, 255, 207, 246, 19, 255, 227, 255, 255, 255, 246, 2, 174, 254, 179, 0 };
/* t */ static const uint8_t Font_Roboto_Bold_20_glyph_116[] = { 6, 14, 8, 1, 14, 6, 136, 0, 13, 255, 0, 13, 255, 0, 255, 255, 255, 255, 255, 255, 94, 255, 85, 13, 255, 0, 13, 255, 0, 13, 255, 0, 13, 255, 0, 13, 255, 0, 11, 255, 150, 7, 255, 255, 0, 142, 253 };
/* u */ static const uint8_t Font_Roboto_Bold_20_glyph_117[] = { 9, 11, 11, 1, 11, 255, 208, 0, 223, 255, 253, 0, 13, 255, 255, 208, 0, 223, 255, 253, 0, 13, 255, 255, 208, 0, 223, 255, 253, 0, 13, 255, 255, 208, 0, 223, 255, 254, 0, 14, 255, 223, 249, 107, 255, 246, 255, 255, 255, 255, 6, 223, 213, 191, 240 };
/* v */ static const uint8_t Font_Roboto_Bold_20_glyph_118[] = { 10, 11, 10, 0, 11, 191, 243, 0, 47, 252, 111, 247, 0, 111, 247, 31, 252, 0, 175, 242, 11, 255, 0, 239, 208, 6, 255, 67, 255, 112, 1, 255, 135, 255, 32, 0, 207, 203, 253, 0, 0, 127, 255, 248, 0, 0, 31, 255, 243, 0, 0, 12, 255, 208, 0, 0, 7, 255, 128, 0 };
/* w */ static const uint8_t Font_Roboto_Bold_20_glyph_119[] = { 15, 11, 15, 0, 11, 159, 241, 0, 223, 112, 7, 255, 69, 255, 64, 31, 252, 0, 175, 240, 31, 247, 6, 255, 240, 13, 252, 0, 223, 176, 175, 255, 80, 255, 128, 9, 254, 14, 252, 249, 63, 244, 0, 111, 244, 254, 79, 214, 255, 0, 2, 255, 207, 160, 255, 207, 192, 0, 14, 255, 245, 10, 255, 248, 0, 0, 175, 255, 16, 111, 255, 80, 0, 6, 255, 192, 1, 255, 241, 0, 0, 47, 247, 0, 12, 253, 0, 0 };
/* x */ static const uint8_t Font_Roboto_Bold_20_glyph_120[] = { 11, 11, 10, 0, 11, 111, 250, 0, 111, 249, 0, 223, 242, 14, 255, 16, 4, 255, 183, 255, 128, 0, 11, 255, 255, 224, 0, 0, 47, 255, 246, 0, 0, 0, 207, 255, 0, 0, 0, 79, 255, 248, 0, 0, 13, 255, 239, 241, 0, 6, 255, 149, 255, 160, 0, 239, 241, 12, 255, 48, 143, 248, 0, 79, 252, 0 };
/* y */ static const uint8_t Font_Roboto_Bold_20_glyph_121[] = { 11, 15, 11, 0, 11, 14, 255, 16, 4, 255, 160, 159, 245, 0, 159, 245, 4, 255, 160, 14, 255, 0, 14, 255, 3, 255, 160, 0, 143, 244, 127, 244, 0, 3, 255, 140, 254, 0, 0, 13, 254, 255, 144, 0, 0, 143, 255, 244, 0, 0, 2, 255, 254, 0, 0, 0, 13, 255, 144, 0, 0, 0, 143, 243, 0, 0, 0, 11, 254, 0, 0, 0, 89, 255, 128, 0, 0, 15, 255, 225, 0, 0, 0, 239, 195, 0, 0, 0 };
/* z */ static const uint8_t Font_Roboto_Bold_20_glyph_122[] = { 8, 11, 10, 1, 11, 255, 255, 255, 255, 255, 255, 255, 255, 85, 85, 207, 247, 0, 3, 255, 192, 0, 13, 255, 32, 0, 143, 246, 0, 3, 255, 176, 0, 13, 255, 16, 0, 143, 250, 85, 85, 255, 255, 255, 255, 255, 255, 255, 255 };
/* { */ static const uint8_t Font_Roboto_Bold_20_glyph_123[] = { 7, 21, 7, 0, 17, 0, 0, 0, 0, 0, 25, 224, 0, 29, 255, 32, 8, 255, 64, 0, 223, 240, 0, 15, 253, 0, 0, 255, 208, 0, 15, 253, 0, 2, 255, 176, 3, 207, 245, 0, 143, 246, 0, 8, 255, 176, 0, 8, 255, 128, 0, 31, 252, 0, 0, 255, 208, 0, 15, 253, 0, 0, 255, 208, 0, 12, 255, 0, 0, 95, 248, 0, 0, 159, 243, 0, 0, 73, 0 };
/* | */ static const uint8_t Font_Roboto_Bold_20_glyph_124[] = { 2, 17, 6, 2, 15, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253 };
/* } */ static const uint8_t Font_Roboto_Bold_20_glyph_125[] = { 7, 21, 7, 0, 17, 0, 0, 0, 2, 231, 0, 0, 95, 252, 0, 0, 127, 245, 0, 1, 255, 160, 0, 15, 252, 0, 0, 255, 208, 0, 15, 253, 0, 0, 239, 240, 0, 7, 255, 162, 0, 8, 255, 128, 1, 223, 248, 0, 175, 246, 0, 15, 254, 0, 0, 255, 208, 0, 15, 253, 0, 0, 255, 192, 0, 63, 249, 0, 11, 255, 48, 6, 255, 112, 0, 25, 32, 0, 0 };
/* ~ */ static const uint8_t Font_Roboto_Bold_20_glyph_126[] = { 11, 5, 13, 1, 9, 0, 52, 16, 0, 0, 0, 191, 255, 128, 2, 254, 127, 255, 255, 198, 207, 205, 248, 23, 255, 255, 244, 170, 16, 3, 207, 230, 0 };

const uint8_t Font_Roboto_Bold_20_glyph_nonprintable[] = { 9, 15, 11, 1, 15, 253, 98, 1, 93, 252, 0, 0, 0, 29, 64, 4, 164, 0, 96, 0, 239, 224, 3, 238, 239, 254, 0, 63, 255, 255, 96, 7, 255, 255, 128, 2, 239, 255, 176, 0, 223, 255, 243, 0, 175, 255, 255, 0, 15, 255, 255, 249, 138, 255, 255, 255, 255, 255, 255, 255, 246, 9, 255, 255, 255, 0, 63, 255, 255, 246, 9, 255, 255 };

const uint8_t * const Font_Roboto_Bold_20[126 + 1 - 32] = {
    Font_Roboto_Bold_20_glyph_32,
    Font_Roboto_Bold_20_glyph_33,
    Font_Roboto_Bold_20_glyph_34,
    Font_Roboto_Bold_20_glyph_35,
    Font_Roboto_Bold_20_glyph_36,
    Font_Roboto_Bold_20_glyph_37,
    Font_Roboto_Bold_20_glyph_38,
    Font_Roboto_Bold_20_glyph_39,
    Font_Roboto_Bold_20_glyph_40,
    Font_Roboto_Bold_20_glyph_41,
    Font_Roboto_Bold_20_glyph_42,
    Font_Roboto_Bold_20_glyph_43,
    Font_Roboto_Bold_20_glyph_44,
    Font_Roboto_Bold_20_glyph_45,
    Font_Roboto_Bold_20_glyph_46,
    Font_Roboto_Bold_20_glyph_47,
    Font_Roboto_Bold_20_glyph_48,
    Font_Roboto_Bold_20_glyph_49,
    Font_Roboto_Bold_20_glyph_50,
    Font_Roboto_Bold_20_glyph_51,
    Font_Roboto_Bold_20_glyph_52,
    Font_Roboto_Bold_20_glyph_53,
    Font_Roboto_Bold_20_glyph_54,
    Font_Roboto_Bold_20_glyph_55,
    Font_Roboto_Bold_20_glyph_56,
    Font_Roboto_Bold_20_glyph_57,
    Font_Roboto_Bold_20_glyph_58,
    Font_Roboto_Bold_20_glyph_59,
    Font_Roboto_Bold_20_glyph_60,
    Font_Roboto_Bold_20_glyph_61,
    Font_Roboto_Bold_20_glyph_62,
    Font_Roboto_Bold_20_glyph_63,
    Font_Roboto_Bold_20_glyph_64,
    Font_Roboto_Bold_20_glyph_65,
    Font_Roboto_Bold_20_glyph_66,
    Font_Roboto_Bold_20_glyph_67,
    Font_Roboto_Bold_20_glyph_68,
    Font_Roboto_Bold_20_glyph_69,
    Font_Roboto_Bold_20_glyph_70,
    Font_Roboto_Bold_20_glyph_71,
    Font_Roboto_Bold_20_glyph_72,
    Font_Roboto_Bold_20_glyph_73,
    Font_Roboto_Bold_20_glyph_74,
    Font_Roboto_Bold_20_glyph_75,
    Font_Roboto_Bold_20_glyph_76,
    Font_Roboto_Bold_20_glyph_77,
    Font_Roboto_Bold_20_glyph_78,
    Font_Roboto_Bold_20_glyph_79,
    Font_Roboto_Bold_20_glyph_80,
    Font_Roboto_Bold_20_glyph_81,
    Font_Roboto_Bold_20_glyph_82,
    Font_Roboto_Bold_20_glyph_83,
    Font_Roboto_Bold_20_glyph_84,
    Font_Roboto_Bold_20_glyph_85,
    Font_Roboto_Bold_20_glyph_86,
    Font_Roboto_Bold_20_glyph_87,
    Font_Roboto_Bold_20_glyph_88,
    Font_Roboto_Bold_20_glyph_89,
    Font_Roboto_Bold_20_glyph_90,
    Font_Roboto_Bold_20_glyph_91,
    Font_Roboto_Bold_20_glyph_92,
    Font_Roboto_Bold_20_glyph_93,
    Font_Roboto_Bold_20_glyph_94,
    Font_Roboto_Bold_20_glyph_95,
    Font_Roboto_Bold_20_glyph_96,
    Font_Roboto_Bold_20_glyph_97,
    Font_Roboto_Bold_20_glyph_98,
    Font_Roboto_Bold_20_glyph_99,
    Font_Roboto_Bold_20_glyph_100,
    Font_Roboto_Bold_20_glyph_101,
    Font_Roboto_Bold_20_glyph_102,
    Font_Roboto_Bold_20_glyph_103,
    Font_Roboto_Bold_20_glyph_104,
    Font_Roboto_Bold_20_glyph_105,
    Font_Roboto_Bold_20_glyph_106,
    Font_Roboto_Bold_20_glyph_107,
    Font_Roboto_Bold_20_glyph_108,
    Font_Roboto_Bold_20_glyph_109,
    Font_Roboto_Bold_20_glyph_110,
    Font_Roboto_Bold_20_glyph_111,
    Font_Roboto_Bold_20_glyph_112,
    Font_Roboto_Bold_20_glyph_113,
    Font_Roboto_Bold_20_glyph_114,
    Font_Roboto_Bold_20_glyph_115,
    Font_Roboto_Bold_20_glyph_116,
    Font_Roboto_Bold_20_glyph_117,
    Font_Roboto_Bold_20_glyph_118,
    Font_Roboto_Bold_20_glyph_119,
    Font_Roboto_Bold_20_glyph_120,
    Font_Roboto_Bold_20_glyph_121,
    Font_Roboto_Bold_20_glyph_122,
    Font_Roboto_Bold_20_glyph_123,
    Font_Roboto_Bold_20_glyph_124,
    Font_Roboto_Bold_20_glyph_125,
    Font_Roboto_Bold_20_glyph_126,
};

#ifndef GLISY_COLOR_H
#define GLISY_COLOR_H

#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GlisyColor GlisyColor;
struct GlisyColor {
  char *name;
  char *string;
  double r, g, b, a;
  uint32_t value;
};

void
GlisyColorInit(GlisyColor *color, const char *name, uint32_t value);

const char *
GlisyColorToString(const GlisyColor color);

const char *
GlisyColorToName(const GlisyColor color);

#ifdef __cplusplus
}
#endif
#endif

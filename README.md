GlisyColor
=========

Glisy color library

## Installation

```sh
$ clib install glisy/color --save
```

## Usage

**main.c:**

```c
#include <glisy/color.h>
#include <glisy/math.h>

int
main (void) {
  GlisyUniform uColor;
  GlisyColor color;
  vec3 rgb;

  // init color

  GlisyColorInit(&color, "blue", 0);
  // set vec3
  vec3_set(rgb, color.r, color.g, color.b);

  // do something with vec3 rgb
  // ...

  return 0;
}
```

## License

MIT

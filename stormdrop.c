#include <stdint.h>

struct stormDropState64 {
  uint64_t elements[512];
  uint64_t a;
  uint64_t b;
};

struct stormDropState32 {
  uint32_t elements[1024];
  uint32_t a;
  uint32_t b;
};

uint64_t stormDrop64(struct stormDropState64 *s) {
  uint64_t mix = (s->elements[s->b & 511] ^ s->a) + s->b;

  s->a = ((s->a << 35) | (s->a >> 29)) ^ s->b;
  s->b += 111111111111111111;
  s->elements[s->b & 511] += (mix << 23) | (mix >> 41);
  return mix;
}

uint32_t stormDrop32(struct stormDropState32 *s) {
  uint32_t mix = (s->elements[s->b & 1023] ^ s->a) + s->b;

  s->a = ((s->a << 17) | (s->a >> 15)) ^ s->b;
  s->b += 1111111111;
  s->elements[s->b & 1023] += (mix << 13) | (mix >> 19);
  return mix;
}

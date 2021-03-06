#pragma once

#include "SAV.h"

class BasicDataRenderer : public IDataRenderer
{
public:
  BasicDataRenderer(Array *data, unsigned int delay_ms)
      : IDataRenderer(data, delay_ms) {}
  ~BasicDataRenderer() = default;
};
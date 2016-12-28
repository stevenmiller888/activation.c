# activation.c

A library of activation functions used in neural networks.

## Example

```c
#include <stdio.h>
#include "activation.h"

int main(void) {
  float x = activation_linear(1.0);
  printf("%f", x);
  return 0;
}
```


//
// activation.h
//
// Copyright (c) 2017 Steven Miller <stevenmiller888@me.com>
//

#include <stdio.h>
#include <math.h>

float activation_logistic(float x) {
  return 1 / (1 + exp(-x));
}

float activation_linear(float x) {
  return x;
}

float activation_relie(float x) {
  if (x > 0) return x;
  return x * .01;
}

float activation_loggy(float x) {
  return 2 / (1 + exp(-x)) - 1;
}

float activation_leaky(float x) {
  if (x > 0) return x;
  return x * .1;
}

float activation_lhtan(float x) {
  if (x < 0) return x * .001;
  if (x > 1) return (x - 1) * .001 + 1;
  return x;
}

float activation_ramp(float x) {
  return x * (x > 0) + x * .1;
}

float activation_relu(float x) {
  return x * (x > 0);
}

float activation_tanh(float x) {
  return (exp(x * 2) - 1) / (exp(x * 2) + 1);
}

float activation_plse(float x) {
  if (x < -4) return (x + 4) * .01;
  if (x > 4)  return (x - 4) * .01 + 1;
  return x * .125 + .5;
}

float activation_elu(float x) {
  return (x >= 0) * x + (x < 0) * (exp(x) - 1);
}

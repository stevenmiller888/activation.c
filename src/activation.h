
//
// activation.h
//
// Copyright (c) 2017 Steven Miller <stevenmiller888@me.com>
//

#ifndef ACTIVATION_H
#define ACTIVATION_H 1

/**
 * Activation functions.
 *
 * https://en.wikipedia.org/wiki/Activation_function
 */

float activation_logistic(float x);
float activation_linear(float x);
float activation_relie(float x);
float activation_loggy(float x);
float activation_leaky(float x);
float activation_lhtan(float x);
float activation_ramp(float x);
float activation_relu(float x);
float activation_tanh(float x);
float activation_plse(float x);
float activation_elu(float x);

#endif

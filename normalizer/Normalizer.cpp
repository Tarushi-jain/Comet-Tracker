﻿/*
 * MeteorDetector
 *
 * SPDX-License-Identifier: MIT
 */
#include "Normalizer.h"

namespace uzanka {
namespace meteordetector {

////////////////////////////////////////////////////////////////////////////////
Normalizer::Normalizer() {
}

////////////////////////////////////////////////////////////////////////////////
Normalizer::~Normalizer() {
}

////////////////////////////////////////////////////////////////////////////////
void Normalizer::Run(ImageHolder::Ptr frame) {
  frame->frame_ = frame->original_;
}

}}  // uzanka::meteordetector

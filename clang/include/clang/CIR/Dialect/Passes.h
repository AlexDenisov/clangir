//===- Passes.h - CIR pass entry points -------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This header file defines prototypes that expose pass constructors.
//
//===----------------------------------------------------------------------===//

#ifndef MLIR_DIALECT_CIR_PASSES_H_
#define MLIR_DIALECT_CIR_PASSES_H_

#include "mlir/Pass/Pass.h"

namespace mlir {

std::unique_ptr<Pass> createLifetimeCheckPass();
std::unique_ptr<Pass> createMergeCleanupsPass();

//===----------------------------------------------------------------------===//
// Registration
//===----------------------------------------------------------------------===//

/// Generate the code for registering passes.
#define GEN_PASS_REGISTRATION
#include "clang/CIR/Dialect/Passes.h.inc"

} // namespace mlir

#endif // MLIR_DIALECT_CIR_PASSES_H_

#pragma once

#include <ATen/core/jit_type.h>
#include <torch/csrc/jit/ir.h>

namespace torch {
namespace jit {

struct HashType {
  size_t operator()(const TypePtr& type) const;
};

struct EqualType {
  bool operator()(const TypePtr& a, const TypePtr& b) const;
};

} // namespace jit
} // namespace torch

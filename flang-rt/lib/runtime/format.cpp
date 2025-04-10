//===-- lib/runtime/format.cpp ----------------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "flang-rt/runtime/format-implementation.h"

namespace Fortran::runtime::io {
RT_OFFLOAD_API_GROUP_BEGIN
template class FormatControl<
    InternalFormattedIoStatementState<Direction::Output>>;
template class FormatControl<
    InternalFormattedIoStatementState<Direction::Input>>;
template class FormatControl<
    ExternalFormattedIoStatementState<Direction::Output>>;
template class FormatControl<
    ExternalFormattedIoStatementState<Direction::Input>>;
template class FormatControl<ChildFormattedIoStatementState<Direction::Output>>;
template class FormatControl<ChildFormattedIoStatementState<Direction::Input>>;
RT_OFFLOAD_API_GROUP_END
} // namespace Fortran::runtime::io

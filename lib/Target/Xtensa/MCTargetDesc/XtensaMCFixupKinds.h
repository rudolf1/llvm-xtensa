//===-- XtensaMCFixups.h - Xtensa-specific fixup entries --------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_XTENSA_XTENSAMCFIXUPS_H
#define LLVM_LIB_TARGET_XTENSA_XTENSAMCFIXUPS_H

#include "llvm/MC/MCFixup.h"

namespace llvm {
namespace Xtensa {
enum FixupKind {
  fixup_xtensa_branch_6 = FirstTargetFixupKind,
  fixup_xtensa_branch_8,
  fixup_xtensa_jump_18,
  fixup_xtensa_call_18,
  fixup_xtensa_l32r_16,
  fixup_xtensa_invalid,
  LastTargetFixupKind,
  NumTargetFixupKinds = LastTargetFixupKind - FirstTargetFixupKind
};
} // end namespace Xtensa
} // end namespace llvm

#endif /* LLVM_LIB_TARGET_XTENSA_XTENSAMCFIXUPS_H */

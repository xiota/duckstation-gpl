// SPDX-FileCopyrightText: 2019-2022 Connor McLaughlin <stenzek@gmail.com>
// SPDX-License-Identifier: GPL-3.0-only

#pragma once

#include "common/types.h"

class StateWrapper;

namespace SIO {

void Initialize();
void Shutdown();
void Reset();
bool DoState(StateWrapper& sw);

u32 ReadRegister(u32 offset);
void WriteRegister(u32 offset, u32 value);

} // namespace SIO

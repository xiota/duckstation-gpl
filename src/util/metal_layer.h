// SPDX-FileCopyrightText: 2019-2023 Connor McLaughlin <stenzek@gmail.com>
// SPDX-License-Identifier: GPL-3.0-only

struct WindowInfo;

namespace CocoaTools {
/// Creates metal layer on specified window surface.
bool CreateMetalLayer(WindowInfo* wi);

/// Destroys metal layer on specified window surface.
void DestroyMetalLayer(WindowInfo* wi);
} // namespace CocoaTools

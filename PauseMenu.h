// ----------------------------------------------------------------
// User interface implementation via OpenGL 3.3 in C++
// Copyright (C) 2020 Jonathan Harrison. All rights reserved.
//
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#pragma once
#include "UIScreen.h"

class PauseMenu : public UIScreen
{
public:
	PauseMenu(class Game* game);
	~PauseMenu();

	void HandleKeyPress(int key) override;
};

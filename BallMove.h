// ----------------------------------------------------------------
// User interface implementation via OpenGL 3.3 in C++
// Copyright (C) 2020 Jonathan Harrison. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#pragma once
#include "MoveComponent.h"

class BallMove : public MoveComponent
{
public:
	BallMove(class Actor* owner);

	void SetPlayer(Actor* player) { mPlayer = player; }
	void Update(float deltaTime) override;
protected:
	class Actor* mPlayer;
};
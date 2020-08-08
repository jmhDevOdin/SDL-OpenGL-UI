// ----------------------------------------------------------------
// User interface implementation via OpenGL 3.3 in C++
// Copyright (C) 2020 Jonathan Harrison. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#pragma once
#include "Component.h"
#include "Math.h"

class CameraComponent : public Component
{
public:
	CameraComponent(class Actor* owner, int updateOrder = 200);
protected:
	void SetViewMatrix(const Matrix4& view);
};

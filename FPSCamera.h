// ----------------------------------------------------------------
// User interface implementation via OpenGL 3.3 in C++
// Copyright (C) 2020 Jonathan Harrison. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#pragma once
#include "CameraComponent.h"

class FPSCamera : public CameraComponent
{
public:
	FPSCamera(class Actor* owner);

	void Update(float deltaTime) override;

	float GetPitch() const { return mPitch; }
	float GetPitchSpeed() const { return mPitchSpeed; }
	float GetMaxPitch() const { return mMaxPitch; }

	void SetPitchSpeed(float speed) { mPitchSpeed = speed; }
	void SetMaxPitch(float pitch) { mMaxPitch = pitch; }
private:
	// Rotation/sec speed of pitch
	float mPitchSpeed;
	// Maximum pitch deviation from forward
	float mMaxPitch;
	// Current pitch
	float mPitch;
};
